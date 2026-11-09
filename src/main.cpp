#include "TransportationSystem.h"

int main() {
    TransportationSystem system;

    // Load data from text files. 
    // Make sure to rename your local files to match these English names!
    system.loadNetwork("stops.txt", "distances.txt", "lines.txt");

    // Launch the interactive menu
    system.showMenu();

    return 0;
}