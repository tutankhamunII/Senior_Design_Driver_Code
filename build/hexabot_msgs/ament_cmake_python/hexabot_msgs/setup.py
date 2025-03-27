from setuptools import find_packages
from setuptools import setup

setup(
    name='hexabot_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('hexabot_msgs', 'hexabot_msgs.*')),
)
