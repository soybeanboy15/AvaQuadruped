import os
from glob import glob
from setuptools import setup

package_name = 'ava_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.py')),
        (os.path.join('share', 'ava_description'), glob('urdf/*'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='matth',
    maintainer_email='matthewlim333@gmail.com',
    description='Package for getting ava moving.',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ava_motion = ava_control.ava_motion:main',
            'ava_gait = ava_control.ava_gait:main',
            'ava_control = ava_control.ava_control:main',
        ],
    },
)
