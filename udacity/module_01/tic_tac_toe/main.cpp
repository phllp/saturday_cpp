#include<iostream>
#include<string>
#include "Board.cpp"
#include "User.cpp"

void printHello() {
    std::cout << "********************************";
    std::cout << "******     TIC TAC TOE     *****";
    std::cout << "********************************";
}

int main() {
    printHello();
    /*
    Create a 4x4 game board
    Prompt the first user (the 'x' user) to enter their name
    Prompt the second user (the 'o' user) to enter their name
    Prompt the 'x' user to select a grid position where they would like to place an 'x'.
    Prompt the 'o' user to select a grid position where they would like to place an 'o'.
    After each user has a turn, check for any row, column, diagonal that has 4 'x's or 4 'o's.
    If 4 'x's are found in the same col, row, diagonal, declare the 'x' user the winner.
    If 4 'o's are found in the same col, row, diagonal, declare the 'o' user the winner.
    End the game and declare the winner.
    If the grid is filled (each player gets 8 turns) and there is not a row, column, diagonal
    with 4 of the same symbol, the game is tied. Declare a tie game. 
    */
    Board board;
    User user1, user2;

    user1.setMarker('x');
    user1.setMarker('o');


    string name;

    std::cout << "Enter player 1 name: \n"; 
    std::getline(std::cin, name);

    user1.setName(name);

    std::cout << "Enter player 2 name: \n"; 
    std::getline(std::cin, name);
    
    user2.setName(name);
    std::cout << user2.getName();

    int turn = 1;

    while (true) {
        board.printBoard();

        if (turn == 1) {
            std::cout << "Player 1 turn. \n";
            std::cout << "Inform a coordinate \n"
        }
    }


    return 0;
}