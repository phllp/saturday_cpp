#include<vector>
#include"check_for_game_over.hpp"

extern std::vector<char> wrong_guesses;

bool check_for_game_over() {
  return wrong_guesses.size() > 5;
}