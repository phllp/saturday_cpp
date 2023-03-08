#include<string>
#include<map>
#include"check_for_win.hpp"

extern std::string secret_word;
extern std::map<char,bool> guesses;

bool check_for_win() {
  for (char c : secret_word) {
    if(!guesses[c]) {
      return false;
    }
  }
  return true;
}