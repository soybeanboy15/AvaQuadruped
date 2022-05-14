import numpy as np
from math import *

import tf_transformations as tft
# Forward and inverse kinematics based on spotmicroai docs found here
# https://spotmicroai.readthedocs.io/en/latest/kinematic/

# Leg Measurements - l1 = shoulder, l2 = femur, l3 = tibia
l1 = 0.05
l2 = 0.10
l3 = 0.10

# Body Measurements - length and width
L = 0.234
W = 0.077

# Inverse kinematics for legs where:
# Inputs: Position of each leg from the centre of the body.
# Outputs: Angles to reach that position.


def solve_legIK(x1, y1, z1):
    D = (y1**2+z1**2-l1**2+x1**2-l2**2-l3**2)/(2*l2*l3)
    theta1 = -atan2(z1, -y1)-atan2(sqrt(y1**2+z1**2-l1**2), -l1)
    theta3 = atan2(sqrt(1-D**2), D)
    theta2 = atan2(x1, sqrt(y1**2+z1**2-l1**2)) - \
        atan2(l3*sin(theta3), l2+l3*cos(theta3))
    return np.round((theta1, theta2 + (pi/4), theta3-(pi/2)), 3)

# Forward kinematics for body where:
# Inputs: roll, pitch, yaw, x, y,z translation from global frame.
# Outputs: Transformation matrix where shoulder joint starts for each leg.


def bodyIK(omega, phi, psi, xm, ym, zm):

    # Rotation matrix for all axis
    Rx = tft.rotation_matrix(omega, (1, 0, 0))
    Ry = tft.rotation_matrix(phi, (0, 1, 0))
    Rz = tft.rotation_matrix(psi, (0, 0, 1))
    Rxyz = tft.concatenate_matrices(Rx, Ry, Rz)

    # Translation matrix and create transformation matrix
    T = tft.translation_matrix((xm, ym, zm))
    Tm = tft.concatenate_matrices(T, Rxyz)

    # Translation matrix for position of each shoulder joint
    leg_tfl = tft.translation_matrix((L/2, W/2, 0))
    leg_tfr = tft.translation_matrix((L/2, -W/2, 0))
    leg_tbr = tft.translation_matrix((-L/2, -W/2, 0))
    leg_tbl = tft.translation_matrix((-L/2, W/2, 0))

    # Final matrices for origin of each leg
    Tfl = tft.concatenate_matrices(Tm, leg_tfl)
    Tfr = tft.concatenate_matrices(Tm, leg_tfr)
    Tbr = tft.concatenate_matrices(Tm, leg_tbr)
    Tbl = tft.concatenate_matrices(Tm, leg_tbl)

    return (Tfl, Tfr, Tbr, Tbl)

# Solve angles for four legs given leg position and forward kinematic transformation matrices.


def solve_angles(fl_leg_position, fr_leg_position, br_leg_position, bl_leg_position, IKbody):

    (Tfl, Tfr, Tbr, Tbl) = IKbody

    # Invert local y
    Ix = np.array([[1, 0, 0, 0], [0, -1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]])

    # --- FL ---
    Q = tft.concatenate_matrices(tft.inverse_matrix(Tfl), fl_leg_position)
    front_left = solve_legIK(Q[0], Q[1], Q[2])

    # --- FR ---
    Q = tft.concatenate_matrices(tft.inverse_matrix(Tfr), fr_leg_position, Ix)
    front_right = solve_legIK(Q[0], Q[1], Q[2])

    # --- BR ---
    Q = tft.concatenate_matrices(tft.inverse_matrix(Tbr), br_leg_position, Ix)
    back_right = solve_legIK(Q[0], Q[1], Q[2])

    # --- BL ---
    Q = tft.concatenate_matrices(tft.inverse_matrix(Tbl), bl_leg_position)
    back_left = solve_legIK(Q[0], Q[1], Q[2])

    return np.array([front_left, front_right, back_right, back_left])
