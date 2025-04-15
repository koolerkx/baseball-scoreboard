#pragma once
#include "team.h"

class ScoreBoard {
    ScoreBoard();
    static ScoreBoard* scoreboard_;
public:
    void print();
    static ScoreBoard* getInstance();
private:
    Team team_home;
    Team team_away;
};