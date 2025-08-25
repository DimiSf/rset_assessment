from setuptools import find_packages
from setuptools import setup

setup(
    name='linear_algebra_service',
    version='0.0.0',
    packages=find_packages(
        include=('linear_algebra_service', 'linear_algebra_service.*')),
)
