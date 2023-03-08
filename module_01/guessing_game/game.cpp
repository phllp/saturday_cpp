#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main () {
  cout<<"********************************************" << endl;
  cout<<"**   Guess a random number and be happy   **" << endl;
  cout<<"********************************************" << endl;
  cout << endl;
  
  int max_atempts = 0;

  while (max_atempts == 0) {
    cout<<"Choose the desired difficulty level..." << endl;
    cout<<"Easy [E] - Medium [M] - Hard [H]" << endl;
    cout << endl;

    char difficulty;
    cin >> difficulty;

    
    if (difficulty == 'E') {
      max_atempts = 10;
    } else if (difficulty == 'M') {
      max_atempts = 5;
    } else if (difficulty == 'H') {
      max_atempts = 3;
    } else {
      cout<<"Invalid input for difficulty level" << endl;
    }
  }

  cout<<"You have " << max_atempts << " atempts. Good luck." << endl;
  cout << endl;
  
  srand(time(NULL));
  const int SECRET_NUMBER = rand() % 100;

  bool isCorrect = false;
  int atempts = 0;
  double score = 1000;

  for (atempts = 1; atempts <= max_atempts; atempts++) {
    int guess;
    cout<<"Atempt number  " << atempts << endl;
    cout<<"Insert a number: " << endl;
    cin >> guess;

    double scoreDecrease = abs((guess - SECRET_NUMBER) / 2.0) ;
    score -= scoreDecrease;

    cout<<"The given number was " << guess << endl;

    isCorrect = guess == SECRET_NUMBER;
    bool isSmaller = guess > SECRET_NUMBER;
    bool isBigger = guess < SECRET_NUMBER;
    
    int remainingAtempts = max_atempts - atempts;

    if (isCorrect) {
      cout<<"Congrats, you're right, the secret number is " << SECRET_NUMBER << "." << endl;
      cout<<"It took only " << atempts << " atempts" << endl;
      cout.precision(2);
      cout << fixed;
      cout<<"Final score: " << score << endl;
      break;
    } else if (isBigger) {
      cout<<"Sorry, but the secret number is bigger than " << guess << "." << endl; 
      cout<<"You still have " << remainingAtempts << " atempts left." << endl;
      cout<< endl;
    } else if (isSmaller) {
      cout<<"Sorry, but the secret number is smaller than " << guess << "." << endl; 
      cout<<"You still have " << remainingAtempts << " atempts left." << endl;
      cout<< endl;
    }
  }
  if (!isCorrect) {
    cout<<"Game Over" << endl;
  }
}