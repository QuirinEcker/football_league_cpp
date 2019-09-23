#include <string>
#include <utility>
#include "Match.h"

using namespace std;

Match::Match(string homeName, string guestName, int homeGoals, int guestGoals)
: homeName(std::move(homeName)), guestName(std::move(guestName)), homeGoals(homeGoals), guestGoals(guestGoals)
{}

const string &Match::getHomeName() const {
    return homeName;
}

const string &Match::getGuestName() const {
    return guestName;
}

int Match::getHomeGoals() const {
    return homeGoals;
}

int Match::getGuestGoals() const {
    return guestGoals;
}

int Match::getHomePoints() const {
    if (homeGoals > guestGoals) {
        return 3;
    } else if (homeGoals == guestGoals) {
        return 1;
    } else {
        return 0;
    }
}

int Match::getGuestPoints() {
    if (homeGoals > guestGoals) {
        return 3;
    } else if (homeGoals == guestGoals) {
        return 1;
    } else {
        return 0;
    }
}
