from setuptools import setup

package_name = 'ava_teleop'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='matth',
    maintainer_email='matthewlim333@gmail.com',
    description='Package for controlling ava with keyboard and joysticks.',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ava_teleop_joy = ava_teleop.ava_teleop_joy:main',
        ],
    },
)
