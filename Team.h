//
// Created by Quirin Ecker on 20.09.19.
//

#ifndef FOOTBALL_LEAGUE_TEAM_H
#define FOOTBALL_LEAGUE_TEAM_H

#include <string>
#include "Match.h"

using namespace std;


class Team {
public:
    Team(string name);
    ~Team();
    void addMatch(Match match);
    int getGoalsDifference();

    const string &getName() const;

    int getPoints() const;

    int getWins() const;

    int getDraws() const;

    int getDefeats() const;

    int getGoalsShot() const;

    int getGoalsReceived() const;

private:
    string name;
    int points;
    int wins;
    int draws;
    int defeats;
    int goalsShot;
    int goalsReceived;
};


#endif //FOOTBALL_LEAGUE_TEAM_H
