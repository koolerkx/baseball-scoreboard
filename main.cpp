#include "scoreboard.h"

int main()
{
    ScoreBoard* scoreboard = ScoreBoard::getInstance();

    scoreboard->print();

    return 0;   
}