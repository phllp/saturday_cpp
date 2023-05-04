#include<iostream>

class Board {
    char board[4][4];

    public:
        Board();
        void printBoard();
};

Board::Board() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            board[i][j] = '-';
        }
    }
}

void Board::printBoard() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "  " << board[i][j] << "  ";
        }
        std::cout << std::endl << std::endl;
    }
}