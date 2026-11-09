cmake_minimum_required(VERSION 3.10)
project(TransitRoutePlanner VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(TransportApp
    src/main.cpp
    src/TransportationSystem.cpp
)

file(COPY
    data/stops.txt
    data/distances.txt
    data/lines.txt
    data/passengers.txt
    DESTINATION ${CMAKE_CURRENT_BINARY_DIR}
)
