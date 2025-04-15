#pragma once
#include "team.h"

class ScoreBoard {
public:
    void print();
    ScoreBoard();
private:
    Team team_home;
    Team team_away;
};