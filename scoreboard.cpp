#include "scoreboard.h"
#include <iostream>

// Singleton
ScoreBoard* ScoreBoard::scoreboard_ = nullptr;

ScoreBoard::ScoreBoard()
{
    this->team_home = Team();
    this->team_away = Team();
}

ScoreBoard* ScoreBoard::getInstance() {
    if (scoreboard_ == nullptr) {
        scoreboard_ = new ScoreBoard();
    }
    return scoreboard_;
}

void ScoreBoard::print() {
    std::cout << "------------------------------------------" << "\n";
    std::cout << "|TEAM| 1| 2| 3| 4| 5| 6| 7| 8| 9| R| H| E|" << "\n";
    std::cout << "|HOME| 0| 0| 0| 0| 0| 0| 0| 0| 0| 0| 0| 0|" << "\n";
    std::cout << "|AWAY| 0| 0| 0| 0| 0| 0| 0| 0| 0| 0| 0| 0|" << "\n";
    std::cout << "------------------------------------------" << "\n";
    std::cout << "|B:ZZZ  | 1B:_ |" << "\n";
    std::cout << "|S:ZZ    | 2B:_ |" << "\n";
    std::cout << "|O:ZZ    | 3B:_ |" << "\n";
    std::cout << "------------------------------------------" << "\n";
}
