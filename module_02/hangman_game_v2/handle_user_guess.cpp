#include<iostream>
#include<vector>
#include"check_letter_exists.hpp"
#include"handle_user_guess.hpp"

extern std::vector<char> wrong_guesses;

void handle_user_guess() {
  char player_char;
  std::cin >> player_char;

  if (check_letter_exists(player_char)) {
    std::cout << "Acertou." << std::endl << std::endl;
  } else {
    std::cout << "Errou." << std::endl << std::endl;
    wrong_guesses.push_back(player_char);
    std::cout << "Remaining chances: " << 6 - wrong_guesses.size() << std::endl; 
  }   
}