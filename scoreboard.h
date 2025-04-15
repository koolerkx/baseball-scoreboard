#pragma once
#include "team.h"



class ScoreBoard {
    ScoreBoard();
    static ScoreBoard* scoreboard_;
public:
    void print();
    static ScoreBoard* getInstance();

    struct {
        int strike = 0;
        int ball = 0;
        int out = 0;
    };

private:
    Team team_home = Team{ "home" };
    Team team_away = Team{ "away" };
};