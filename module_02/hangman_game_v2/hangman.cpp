#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<fstream>
#include<ctime>
#include<cstdlib>

#include"print_header.hpp"
#include"print_wrong_guesses.hpp"
#include"print_secret_word.hpp"
#include"check_letter_exists.hpp"
#include"read_file.hpp"
#include"handle_user_guess.hpp"
#include"render_word.hpp"
#include"check_for_win.hpp"
#include"check_for_game_over.hpp"
#include"save_file.hpp"
#include"store_new_word.hpp"
#include"print_final_message.hpp"
#include"sort_word.hpp"

using namespace std;

string secret_word;
map<char,bool> guesses;
vector<char> wrong_guesses;

int main() {
  sort_word();

  cout << secret_word << endl;

  print_header();

  for (char c : secret_word) {
    guesses[c] = false;
  }

  cout << "Inform a letter: " << endl;

  bool game_over = false;
  bool game_won = false;

  while (!game_over && !game_won) {
    print_wrong_guesses();
    print_secret_word();
    handle_user_guess();

    game_won = check_for_win();
    game_over = check_for_game_over();

  }
  print_final_message(game_won);
}

  