//
// Created by Quirin Ecker on 20.09.19.
//

#include "League.h"

void League::addMatchResult(Match &match) {
    findOrCreateTeam(match.getGuestName())->addMatch(match);
    findOrCreateTeam(match.getHomeName())->addMatch(match);
}

vector<Team*> League::getTable() {
    for (int i = 0; i < this->teams.size(); ++i) {
        for (int j = i + 1; j < this->teams.size(); ++j) {
            if (teams[i]->getPoints() < teams[j]->getPoints()) {
                Team* temp = teams[i];
                teams[i] = teams[j];
                teams[j] = temp;
            }
        }
    }


    return this->teams;
}

Team* League::findOrCreateTeam(string teamName) {
    for (int i = 0; i < this->teams.size(); ++i) {
        if (teamName == this->teams[i]->getName()) {
            return this->teams[i];
        }
    }

    Team* team = new Team(teamName);
    this->teams.push_back(team);
    return team;
}