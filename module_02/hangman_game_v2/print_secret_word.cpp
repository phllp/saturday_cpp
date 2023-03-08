#include<iostream>
#include<string>
#include<map>
#include"print_secret_word.hpp"

extern std::string secret_word;
extern std::map<char,bool> guesses;

void print_secret_word() {
  for (char c : secret_word) {
    if (guesses[c]) {
      std::cout << c << " " ;
    } else {
      std::cout << "_ " ;
    }
  }
  std::cout << std::endl << std::endl;
}