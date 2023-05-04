#include<iostream>
#include<stdlib.h>

#include"math/Validator.hpp"
#include"math/MatrixMultiplication.hpp"
#include"utils/PrintUtils.hpp"
#include"utils/MatrixGenerator.hpp"
#include"utils/Clock.hpp"

int main() {
    Clock clock;
    clock.start();  

    int M1_COLS = 10;
    int M1_ROWS = 10;

    int M2_COLS = 10;
    int M2_ROWS = 10;

    MatrixGenerator mGen;

    int** matrix_1 = mGen.generateMatrix(M1_ROWS, M1_COLS);
    int** matrix_2 = mGen.generateMatrix(M2_ROWS, M2_COLS);

    PrintUtils printer(M1_ROWS, M2_ROWS, M1_COLS, M2_COLS);
    printer.printHeader();

    Validator validator;
    validator.checkValidMatrixSizes(M1_COLS, M2_ROWS);

    MatrixMultiplication multiplier;
    int** output = multiplier.multiply(matrix_1, matrix_2, M1_ROWS, M2_COLS, M2_COLS);

    printer.printMatrix(output, M1_ROWS, M2_COLS);

    clock.stop();
    clock.printDelta();
    return 0;
}

