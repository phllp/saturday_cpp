#include<iostream>
#include<fstream>
#include"read_file.hpp"


std::vector<std::string> read_file() {
  std::vector<std::string> all_words;
  
  std::ifstream word_file;
  word_file.open("module_01/hangman_game/words.txt");
  
  if (!word_file.is_open()) {
    std::cout << "List of words is unavailable" << std::endl;
    exit(0);
  }

  int number_of_words;
  word_file >> number_of_words;

  for (int i = 0; i < number_of_words; i++) {
    std::string word;
    word_file >> word;
    all_words.push_back(word);
  }

  word_file.close();
  
  return all_words;
}