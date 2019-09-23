//
// Created by Quirin Ecker on 20.09.19.
//
#ifndef FOOTBALL_LEAGUE_LEAGUE_H
#define FOOTBALL_LEAGUE_LEAGUE_H

//#include <collection.h>
#include <algorithm>
#include <vector>
#include "Team.h"
#include "Match.h"

//using namespace Platform;
//using namespace Platform::Collections;
//using namespace Windows::Foundation::Collections;

class League {
public:
    void addMatchResult(Match& match);
    vector<struct Team *> getTable();

private:
    vector<Team*> teams;
    Team * findOrCreateTeam(string teamName);
};


#endif //FOOTBALL_LEAGUE_LEAGUE_H
