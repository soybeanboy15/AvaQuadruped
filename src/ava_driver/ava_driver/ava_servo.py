import time
import board
import digitalio
import numpy as np
from numpy import interp, clip
from adafruit_servokit import ServoKit

class Servos():
    def __init__(self):
        self.kit = ServoKit(channels=16 , frequency=300)
        self.CalibrateServo()
        
    def CalibrateServo(self):
        self.kit.servo[0].set_pulse_width_range(min_pulse=850, max_pulse = 2050) # FL Leg (+)
        self.kit.servo[1].set_pulse_width_range(min_pulse=980, max_pulse = 2300) # FL Knee (-)
        self.kit.servo[2].set_pulse_width_range(min_pulse=800, max_pulse = 2160) # FL Hip (+)

        self.kit.servo[3].set_pulse_width_range(min_pulse=840, max_pulse = 2120) # BL Leg (+)
        self.kit.servo[4].set_pulse_width_range(min_pulse=1010, max_pulse = 2310) # BL Knee (-)
        self.kit.servo[5].set_pulse_width_range(min_pulse=840, max_pulse = 2200) # BL Hip (-)

        self.kit.servo[6].set_pulse_width_range(min_pulse=890, max_pulse = 2190) # BR Leg (-)
        self.kit.servo[7].set_pulse_width_range(min_pulse=750, max_pulse = 2050) # BR Knee (+)
        self.kit.servo[8].set_pulse_width_range(min_pulse=620, max_pulse = 1900) # BR Hip (+)

        self.kit.servo[9].set_pulse_width_range(min_pulse=900, max_pulse = 2140) # FR Leg (-)
        self.kit.servo[10].set_pulse_width_range(min_pulse=520, max_pulse = 2500) # FR Knee (+)
        self.kit.servo[11].set_pulse_width_range(min_pulse=940, max_pulse = 2180) # FR Hip (-)'

    def MoveServo(self, angle):
        # Tibia -50 to 60 deg
        # Femur -45 to 25 deg
        # Hip -30 to 30 deg
        self.kit.servo[0].angle = clip(interp(angle[2], [-60, 60], [30,150]), 40, 150) 
        self.kit.servo[1].angle = clip(interp(-angle[1], [-45, 45], [45,135]), 65, 135)
        self.kit.servo[2].angle = interp(angle[0], [-30, 30], [60,120])

        self.kit.servo[3].angle = clip(interp(angle[11], [-60, 60], [30,150]), 40, 150)
        self.kit.servo[4].angle = clip(interp(-angle[10], [-45, 45], [45,135]), 65, 135)
        self.kit.servo[5].angle = interp(-angle[9], [-30, 30], [60,120])

        self.kit.servo[6].angle = clip(interp(-angle[8], [-60, 60], [30,150]), 30, 140)
        self.kit.servo[7].angle = clip(interp(angle[7], [-45, 45], [45,135]), 45, 115)
        self.kit.servo[8].angle = interp(angle[6], [-30, 30], [60,120])

        self.kit.servo[9].angle = clip(interp(-angle[5], [-60, 60], [30,150]), 30, 140)
        self.kit.servo[10].angle = clip(interp(angle[4], [-45, 45], [45,135]), 45, 115)
        self.kit.servo[11].angle = interp(-angle[3], [-30, 30], [60,120])

