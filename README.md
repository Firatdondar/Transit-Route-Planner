# 🚌 Transit Route Planner & Transfer Analyzer

![C++17](https://img.shields.io/badge/C%2B%2B-17-00599C?logo=c%2B%2B&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-3.10%2B-064F8C?logo=cmake&logoColor=white)
![Algorithm](https://img.shields.io/badge/Algorithm-Graph%20Routing%20%26%20Transfers-informational)
![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)

A **C++17** public transit route planner and transfer point analyzer that processes urban stop networks, transit lines, inter-stop distance matrices, and passenger itinerary logs to compute shortest routes and identify key transfer hubs.

---

## ✨ Key Features

- **Graph-Based Route Computation:** Evaluates multi-stop transit networks to determine optimal passenger journeys across bus, metro, and tramway corridors.
- **Transfer Hub Detection:** Identifies stations served by multiple transit lines to highlight critical passenger transfer nodes.
- **Line Utilization Metrics:** Aggregates passenger journey records (`data/passengers.txt`) to rank transit lines by ridership volume.
- **Cross-Platform CMake Build:** Automatically stages dataset files into the build directory for zero-configuration execution.

---

## 🗂️ Project Structure

```text
Transit-Route-Planner/
├── data/
│   ├── distances.txt        # Inter-stop distance matrix
│   ├── lines.txt            # Transit line stop sequences
│   ├── passengers.txt       # Passenger itinerary records
│   └── stops.txt            # Station IDs and names
├── include/
│   └── TransportationSystem.h
├── src/
│   ├── TransportationSystem.cpp
│   └── main.cpp
├── CMakeLists.txt           # CMake build configuration
├── LICENSE                  # MIT License
└── README.md                # Project documentation
```

---

## 🚀 Build & Run Instructions

```bash
git clone https://github.com/Firatdondar/Transit-Route-Planner.git
cd Transit-Route-Planner
mkdir build && cd build
cmake ..
cmake --build .
./TransportApp
```

---

## 📄 License

Distributed under the **MIT License**. See [`LICENSE`](LICENSE) for details.
