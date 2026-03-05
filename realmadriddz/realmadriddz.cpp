#include <iostream>
#include "RealMadrid.h"

int main() {
    CurrentSquad myTeam;

    cout << "1. Setting up management..." << endl;
    myTeam.setManagement("Florentino Perez", "Zinedine Zidane"); 

    cout << "2. Winning a trophy..." << endl;
    myTeam.winChampionsLeague(); 

    cout << "\n3. Setting up squad details..." << endl;
    myTeam.setSquadDetails("Vinicius Jr", 1.25);

    cout << "\n4. Full Report:" << endl;
    myTeam.printSeasonStats();

    cout << "\nChecking trophies via getter: " << myTeam.getTrophies() << endl;

    return 0;
}
