#include<vector>
#include<string>
#include<ctime>
#include<cstdlib>
#include"sort_word.hpp"
#include"read_file.hpp"

extern std::string secret_word;

void sort_word() {
  std::vector<std::string> words = read_file();

  int limit = words.size();

  srand(time(NULL));
  int index = rand() % limit;

  secret_word = words[index];
}