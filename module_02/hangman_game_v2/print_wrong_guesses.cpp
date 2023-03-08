#include<iostream>
#include<vector>
#include"print_wrong_guesses.hpp"

extern std::vector<char> wrong_guesses;

void print_wrong_guesses() {
  std::cout << "Wrong letters:" << std::endl;

  for (char c : wrong_guesses) {
    std::cout << c << " ";
  }
  std::cout << std::endl;
}