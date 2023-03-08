#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;

string secret_word;
map<char,bool> guesses;
vector<char> wrong_guesses;

void print_header() {
  cout <<"*********************************************" << endl;
  cout <<"**                 The Hangman             **" << endl;
  cout <<"*********************************************" << endl;
  cout << endl;
}

void print_wrong_guesses() {
  cout << "Wrong letters:" << endl;

  for (char c : wrong_guesses) {
    cout << c << " ";
  }
  cout << endl;
}

void print_secret_word() {
  for (char c : secret_word) {
    if (guesses[c]) {
      cout << c << " " ;
    } else {
      cout << "_ " ;
    }
  }
  cout << endl << endl;
}

bool letra_existe(char user_guess) {
  for (char c : secret_word) {
    if (user_guess == c) {
      guesses[c] = true;
      return true;
    }
  }
  return false;
}

vector<string> read_file() {
  vector<string> all_words;
  
  ifstream word_file;
  word_file.open("module_01/hangman_game/words.txt");
  
  if (!word_file.is_open()) {
    cout << "List of words is unavailable" << endl;
    exit(0);
  }

  int number_of_words;
  word_file >> number_of_words;

  for (int i = 0; i < number_of_words; i++) {
    string word;
    word_file >> word;
    all_words.push_back(word);
  }

  word_file.close();
  
  return all_words;
}

void handle_user_guess() {
  char player_char;
  cin >> player_char;

  if (letra_existe(player_char)) {
    cout << "Acertou." << endl << endl;
  } else {
    cout << "Errou." << endl << endl;
    wrong_guesses.push_back(player_char);
    cout << "Remaining chances: " << 6 - wrong_guesses.size() << endl; 
  }   
}

void render_word(char user_guess) {
  bool is_revealed = true;
  if (is_revealed) {
    cout << "Teste" ;
  } else {
    cout << "_ " ;
  }
}

bool check_for_win() {
  for (char c : secret_word) {
    if(!guesses[c]) {
      return false;
    }
  }
  return true;
}

bool check_for_game_over() {
  return wrong_guesses.size() > 5;
}

void save_file(vector<string> words) {
  ofstream file;
  file.open("module_01/hangman_game/words.txt");
  if (!file.is_open()){
    cout << "List of words is unavailable" << endl;
    exit(0);
  }  

  file << words.size() << endl;
  
  for (string word : words) {
    file << word << endl;
  }

  file.close();
}

void store_new_word() {
  cout << "Type the desired word: " << endl;

  string new_word;
  cin >> new_word;

  vector<string> all_words = read_file();
  all_words.push_back(new_word);

  save_file(all_words);
}


void print_final_message(bool win) {
  if (win) {
    cout << "Congratulations, you won the game!!!" << endl;
    cout << "The word was: " << secret_word << endl;
    cout << "Want to add a new word to the database? (Y/n)" << endl;

    char answer;
    cin >> answer;
    if (answer == 'Y' || answer == 'y') {
      store_new_word();
    }
  } else {
    cout << "Congratulations, you lost the game. Shame on you." << endl;
    cout << "The word was: " << secret_word << endl;
  }
}



void sort_word() {
  vector<string> words = read_file();

  int limit = words.size();

  srand(time(NULL));
  int index = rand() % limit;

  secret_word = words[index];
}

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

  