# way to build this project
# cmake -S . -B build-files

# for building run command: cmake -S PATH -B PATH /
# Where -S is source and -B build /
# for now -S is in src folder, build is in build-env /


cmake_minimum_required(VERSION 3.19)
# set the project name
project(DumbApp VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Boost 1.79.0 REQUIRED)

add_executable(${PROJECT_NAME} src/sources/client.cpp
                               src/sources/application.cpp
                               src/sources/main.cpp
                               src/sources/network.cpp)

target_include_directories(${PROJECT_NAME}
        PUBLIC
            $<INSTALL_INTERFACE:include>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/headers>
            ${Boost_INCLUDE_DIRS}
        PRIVATE
)

target_link_libraries(${PROJECT_NAME}
        PRIVATE
            ${Boost_LIBRARIES}
)