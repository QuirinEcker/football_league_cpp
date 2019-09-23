#include <iostream>
#include <fstream>
#include "Match.h"
#include "League.h"
using namespace std;

void readFile();

void printTable(vector<Team *> vector);

void clearHeap(vector<Team *> vector);

static League league;

int main() {
    readFile();
    printTable(league.getTable());
    clearHeap(league.getTable());
    return 0;
}

void clearHeap(vector<Team *> vector) {
    for (int i = 0; i < vector.size(); ++i) {
        delete vector[i];
    }
}

void printTable(vector<Team *> vector) {
    printf("%-20s %5s %5s %5s %5s %5s %5s %5s \n", "Team", "Pts", "W", "D", "L", "GF", "GA", "GD");
    for (int i = 0; i < vector.size(); ++i) {
        Team* team = vector[i];
        printf("%-20s %5d %5d %5d %5d %5d %5d %5d \n",
                team->getName().c_str(),
                team->getPoints(),
                team->getWins(),
                team->getDraws(),
                team->getDefeats(),
                team->getGoalsShot(),
                team->getGoalsReceived(),
                team->getGoalsDifference()
        );
    }
}

void readFile() {
    ifstream file;

    file.open("/Users/quirin/Documents/3AHITM/football-league/data.txt");

    if (file.is_open()) {
        string date;
        string homeTeam;
        string guestTeam;
        string homeGoals;
        string guestGoals;
        bool firstline = true;

        while (file.peek() != EOF) {
            getline(file, date, ';');
            getline(file, homeTeam, ';');
            getline(file, guestTeam, ';');
            getline(file, homeGoals, ';');
            getline(file, guestGoals, '\n');

            if (!firstline) {
                int homeGoalsInt = stoi(homeGoals);
                int guestGoalsInt = stoi(guestGoals);

                league.addMatchResult(*(new Match(homeTeam, guestTeam, homeGoalsInt, guestGoalsInt)));
            } else {
                firstline = false;
            }
        }
    } else {
        cout << "file does not exist" << endl;
    }
}