#include<iostream>
#include<fstream>
#include"save_file.hpp"

void save_file(std::vector<std::string> words) {
  std::ofstream file;
  file.open("module_01/hangman_game/words.txt");
  if (!file.is_open()){
    std::cout << "List of words is unavailable" << std::endl;
    exit(0);
  }  

  file << words.size() << std::endl;
  
  for (std::string word : words) {
    file << word << std::endl;
  }

  file.close();
}
