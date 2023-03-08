#include<string>
#include<map>
#include"check_letter_exists.hpp"

extern std::map<char,bool> guesses;
extern std::string secret_word;

bool check_letter_exists(char user_guess) {
  for (char c : secret_word) {
    if (user_guess == c) {
      guesses[c] = true;
      return true;
    }
  }
  return false;
}