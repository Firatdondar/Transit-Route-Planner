cmake_minimum_required(VERSION 3.10)

project(TransportationSystem VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(TransportApp 
    main.cpp 
    TransportationSystem.cpp
)

file(COPY stops.txt distances.txt lines.txt passengers.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
