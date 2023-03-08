#include<iostream>
#include<string>
#include"print_final_message.hpp"
#include"store_new_word.hpp"

extern std::string secret_word;

void print_final_message(bool win) {
  if (win) {
    std::cout << "Congratulations, you won the game!!!" << std::endl;
    std::cout << "The word was: " << secret_word << std::endl;
    std::cout << "Want to add a new word to the database? (Y/n)" << std::endl;

    char answer;
    std::cin >> answer;
    if (answer == 'Y' || answer == 'y') {
      store_new_word();
    }
  } else {
    std::cout << "Congratulations, you lost the game. Shame on you." << std::endl;
    std::cout << "The word was: " << secret_word << std::endl;
  }
}
