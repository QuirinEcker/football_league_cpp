//
// Created by Quirin Ecker on 20.09.19.
//
#ifndef FOOTBALL_LEAGUE_MATCH_H
#define FOOTBALL_LEAGUE_MATCH_H

#include <string>
using namespace std;

class Match {
public:
    Match(string homeName, string guestName, int homeGoals, int guestGoals);

    const string &getHomeName() const;

    const string &getGuestName() const;

    int getHomeGoals() const;

    int getGuestGoals() const;

    int getGuestPoints() const;

    int getHomePoints() const;


private:
    string homeName;
    string guestName;
    int homeGoals;
    int guestGoals;

    int getGuestPoints();
};


#endif // FOOTBALL_LEAGUE_MATCH_H
