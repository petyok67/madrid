#pragma once 
#include <iostream>
#include <string>
using namespace std;

// basic class 
class RealMadridClub {
private: 
    string president;
    string headCoach;
    int uclTrophies;

public:
    RealMadridClub(); // constructor

	// 4 methods of the base class
    void setManagement(string pres, string coach);
    void winChampionsLeague();
    int getTrophies() const;
    void printClubInfo() const; 
};

// derived class
class CurrentSquad : public RealMadridClub {
private:
    string mainStar;
    double squadValue;

public:
    CurrentSquad(); 

	// 2 methods of the derived class
    void setSquadDetails(string star, double value);
    void printSeasonStats() const;
};
