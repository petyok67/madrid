#include "RealMadrid.h"

// realization of basic class

RealMadridClub::RealMadridClub() {
    president = "Perez";
    headCoach = "Ancelotti";
    uclTrophies = 15;
}

// first method
void RealMadridClub::setManagement(string pres, string coach) {
    president = pres;
    headCoach = coach;
}

// second
void RealMadridClub::winChampionsLeague() {
    uclTrophies++;
    cout << "CAMPEONES! Another UCL title added!" << endl;
}

// third
int RealMadridClub::getTrophies() const {
    return uclTrophies;
}

// fourth
void RealMadridClub::printClubInfo() const {
    cout << "--- Club Base Info ---" << endl;
    cout << "President: " << president << endl;
    cout << "Head Coach: " << headCoach << endl;
    cout << "Total UCL: " << uclTrophies << endl;
}

// second realization of the derived class

CurrentSquad::CurrentSquad() {
    mainStar = "Unknown";
    squadValue = 0.0;
}

// first method
void CurrentSquad::setSquadDetails(string star, double value) {
    mainStar = star;
    squadValue = value;
}

// second
void CurrentSquad::printSeasonStats() const {
    cout << "\n--- Squad Details (Derived) ---" << endl;
    cout << "Main Star: " << mainStar << endl;
    cout << "Market Value: " << squadValue << " billion Euro" << endl;

    printClubInfo();
}