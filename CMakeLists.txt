cmake_minimum_required(VERSION 3.10)
project(pi443mhz)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_VERBOSE_MAKEFILE ON)


# add the executable
add_executable(pi443mhz src/main.cpp
                        src/NewRemoteReceiver.cpp
                        src/NewRemoteReceiver.h
                        src/NewRemoteTransmitter.cpp
                        src/NewRemoteTransmitter.h)

# Link against wiringPi
find_library(WIRINGPI_LIBRARIES NAMES wiringPi)
target_link_libraries(pi443mhz ${WIRINGPI_LIBRARIES})
