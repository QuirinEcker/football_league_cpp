//
// Created by Quirin Ecker on 20.09.19.
//

#include <iostream>
#include "Team.h"


Team::Team(string name): name(name) {}

const string &Team::getName() const {
    return name;
}

void Team::addMatch(Match match) {
    if (match.getGuestName() == this->getName()) {
        this->goalsShot += match.getGuestGoals();
        this->goalsReceived += match.getHomeGoals();

        if (match.getGuestGoals() > match.getHomeGoals()) {
            this->wins++;
        } else if (match.getHomeGoals() > match.getGuestGoals()) {
            this->defeats++;
        } else if (match.getHomeGoals() == match.getGuestGoals()) {
            this->draws++;
        }
    } else if (match.getHomeName() == this->getName()) {
        this->goalsShot += match.getHomeGoals();
        this->goalsReceived += match.getGuestGoals();

        if (match.getHomeGoals() > match.getGuestGoals()) {
            this->wins++;
        } else if (match.getGuestGoals() > match.getHomeGoals()) {
            this->defeats++;
        } else if (match.getHomeGoals() == match.getGuestGoals()) {
            this->draws++;
        }
    }

    this->points = wins * 3 + draws;
}

int Team::getPoints() const {
    return points;
}

int Team::getWins() const {
    return wins;
}

int Team::getDraws() const {
    return draws;
}

int Team::getDefeats() const {
    return defeats;
}

int Team::getGoalsShot() const {
    return goalsShot;
}

int Team::getGoalsReceived() const {
    return goalsReceived;
}

int Team::getGoalsDifference() {
    return goalsShot - goalsReceived;
}

Team::~Team() {
    cout << "deleted" << " " << this->getName() <<endl;
}



