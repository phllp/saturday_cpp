#include<iostream>
#include<stdlib.h>
#include<ctime>


#include"Validator.hpp"
#include"PrintUtils.hpp"
#include"MatrixGenerator.hpp"

int main() {
    clock_t start_time, end_time;
    double time_used;

    start_time = clock();

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


    int itter_count = 0;

    int pointer_m1 = 0;
    int pointer_m2 = 0;

    int output[M1_ROWS][M2_COLS];

    for (int i = 0; i < M1_ROWS; i++) {

        //Armazenando os valores da linha da matriz em um array próprio
        int m1_row[M1_COLS];
        for (int j = 0; j < M1_COLS; j ++) {
            m1_row[j] = matrix_1[i][j];
        }

        while (itter_count < M1_COLS) {
            int m2_current_line = 0;
            int sum = 0;

            for (int k = 0; k < M2_COLS; k++) {
                //Armazenando os valores da linha da matriz em um array próprio
                int m2_row[M2_COLS];
                for (int j = 0; j < M2_COLS; j++) {
                    m2_row[j] = matrix_2[m2_current_line][j];
                }

                m2_current_line++;
            
                int el_m1 = m1_row[pointer_m1];
                int el_m2 = m2_row[pointer_m2];

                pointer_m1++;
                
                int product = el_m1 * el_m2;
                sum += product;

            }
            //std::cout << sum << "\n";
            output[i][itter_count] = sum;
            pointer_m2++;
            pointer_m1 = 0;
            itter_count++;

        }
        itter_count = 0;
        pointer_m1 = 0;
        pointer_m2 = 0;
    }

    for (int i = 0; i < M1_ROWS; i++) {
        for (int j = 0; j < M2_COLS; j++) {
            std::cout << output[i][j] << " "; 
        }
        std::cout << std::endl;
    }

    end_time = clock();

    time_used = (end_time - start_time) / CLOCKS_PER_SEC;
    std::cout << "Tempo de execucao: " << time_used << " segundos" << std::endl;

    return 0;
}

