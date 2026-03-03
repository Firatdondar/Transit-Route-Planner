#ifndef TRANSPORTATION_SYSTEM_H
#define TRANSPORTATION_SYSTEM_H

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <limits>
#include <queue>
#include <algorithm>
#include <set>
#include <fstream>
#include <sstream>

class Stop {
public:
    int id;
    std::string name;
    std::set<int> passingLines;

    Stop(int id = 0, const std::string& name = "") : id(id), name(name) {}
};

class Line {
public:
    int number;
    std::string name;
    std::vector<int> stops;

    Line(int no = 0, const std::string& name = "") : number(no), name(name) {}
};

class Passenger {
public:
    int id;
    std::string fullName;
    int startStopId;
    int targetStopId;

    Passenger(int id = 0, const std::string& fullName = "", int start = 0, int target = 0)
        : id(id), fullName(fullName), startStopId(start), targetStopId(target) {}
};

class TransportationSystem {
private:
    std::map<int, Stop> stops;
    std::map<int, Line> lines;
    // Adjacency list representation of the graph: graph[stopId][neighborId] = distance
    std::map<int, std::map<int, int>> distanceGraph;
    std::map<int, int> lineUsageCounts;

public:
    TransportationSystem() = default;
    ~TransportationSystem() = default;

    /**
     * @brief Loads stops, lines, and distances from text files.
     */
    void loadNetwork(const std::string& stopListFile, const std::string& stopDistancesFile, const std::string& linesFile);
    
    /**
     * @brief Searches for a stop in O(log N) time using std::map.
     */
    void searchStop(int stopId);
    
    /**
     * @brief Calculates the shortest path between two stops using Dijkstra's Algorithm.
     * @return Pair of total distance and the path as a vector of stop IDs.
     */
    std::pair<int, std::vector<int>> calculateShortestPath(int startStopId, int targetStopId);
    
    void planJourneys(const std::string& passengerListFile);
    void printJourneyInfo(int passengerId, const std::string& fullName, int startId, int targetId, int totalDistance, const std::vector<int>& path);
    std::vector<std::pair<int, std::vector<int>>> getLinesAndTransfers(const std::vector<int>& path);
    
    void detectTransferPoints();
    void printMostUsedLines();
    void listAllLines();
    void displayStopsOnLine(int lineNumber);
    void listAllPassengers(const std::string& passengerListFile);
    void showMenu();
};

#endif // TRANSPORTATION_SYSTEM_H