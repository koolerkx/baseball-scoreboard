#include <stdexcept>
#include <string>
#include "team.h"

Team::Team(std::string team_name) {
	if (team_name.length() > 4 || team_name.length() <= 0) {
		throw std::invalid_argument("The length of team name should be between 1 to 4.");
	}
	this->team_name = team_name;
}