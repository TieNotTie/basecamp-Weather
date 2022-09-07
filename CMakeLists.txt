cmake_minimum_required(VERSION 3.19)
# set the project name
project(DumbApp VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Boost 1.79.0 REQUIRED)
