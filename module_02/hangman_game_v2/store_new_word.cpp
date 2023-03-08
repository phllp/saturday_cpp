#include<iostream>
#include<string>
#include<vector>
#include"store_new_word.hpp"
#include"read_file.hpp"
#include"save_file.hpp"

void store_new_word() {
  std::cout << "Type the desired word: " << std::endl;

  std::string new_word;
  std::cin >> new_word;

  std::vector<std::string> all_words = read_file();
  all_words.push_back(new_word);

  save_file(all_words);
}