# Public Transportation Routing System

A comprehensive public transportation routing and management system written in modern C++. This system calculates the shortest paths between stops using Dijkstra's Algorithm, manages passenger journeys, and identifies key transfer points in a transit network.

## Features
* **Shortest Path Calculation:** Utilizes Dijkstra's algorithm for optimal route finding.
* **Journey Planning:** Processes multiple passenger requests from datasets.
* **Transfer Detection:** Automatically identifies stops where passengers need to switch lines.
* **Data Analytics:** Tracks and reports the most frequently used public transit lines.

## Prerequisites
* C++17 compatible compiler (GCC, Clang, or MSVC)
* CMake (Minimum version 3.10)

## Build Instructions
This project uses CMake for the build process. Follow these steps to compile the application:

```bash
git clone https://github.com/Firatdondar/public-transport-routing-system.git
cd public-transport-routing-system
mkdir build
cd build
cmake ..
cmake --build .
./TransportApp
```
