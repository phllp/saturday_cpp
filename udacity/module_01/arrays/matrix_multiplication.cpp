/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector.

g++ n_dimension_array.cpp -o n_dimension_array.out -Wno-sizeof-array-argument

*/


#include<iostream>
#include<stdlib.h>
#include<ctime>

void print_info(int rows_m1, int rows_m2, int cols_m1, int cols_m2) {
    std::cout << "**************************** \n";
    std::cout << "******    MATRICES    ****** \n";
    std::cout << "**************************** \n";
    
    std::cout << std::endl;
    std::cout << "Matrix 1 \n";
    std::cout << "\tRows: " << rows_m1 <<" \n";
    std::cout << "\tCols: " << cols_m1 <<" \n";
    std::cout << std::endl;
    std::cout << "Matrix 2 \n";
    std::cout << "\tRows: " << rows_m2 <<" \n";
    std::cout << "\tCols: " << cols_m2 <<" \n";
    std::cout << std::endl;
}

void check_valid_operation(int cols_m1_size, int rows_m2_size) {
    if (cols_m1_size != rows_m2_size) {
        std::cout << "Invalid Operation: Matrices have invalid formats. \nExiting...";
        exit(EXIT_FAILURE);
    } else {
        std::cout << "Operation is valid, starting multiplication process... \n";
    }
}

int main() {
    clock_t start_time, end_time;
    double time_used;

    start_time = clock();

    int M1_COLS = 10;
    int M1_ROWS = 10;

    int M2_COLS = 10;
    int M2_ROWS = 10;

    int matrix_1[M1_ROWS][M1_COLS] = {
        {49, 19, 25, 48, 12, 47, 32, 11, 22, 33},
        {27, 15, 41, 50, 48, 17, 47, 30, 48, 10},
        {10, 28, 37, 15, 45, 50, 22, 45, 21, 31},
        {35, 11, 38, 12, 27, 17, 22, 23, 2, 47},
        {5, 9, 6, 7, 28, 8, 10, 12, 46, 34},
        {29, 41, 4, 38, 44, 36, 10, 20, 46, 50},
        {31, 18, 9, 18, 7, 10, 37, 24, 18, 13},
        {16, 8, 5, 12, 6, 31, 31, 36, 41, 45},
        {18, 34, 35, 38, 31, 16, 27, 47, 3, 30},
        {25, 11, 15, 9, 33, 1, 45, 20, 34, 17}
    };
    
    int matrix_2[M2_ROWS][M2_COLS] = {
        {16, 38, 45, 30, 8, 27, 48, 26, 23, 34},
        {20, 48, 31, 13, 33, 19, 36, 18, 10, 8},
        {26, 50, 22, 16, 8, 29, 6, 35, 23, 27},
        {19, 48, 2, 25, 19, 6, 47, 28, 21, 20},
        {43, 28, 7, 43, 4, 41, 24, 12, 14, 31},
        {9, 31, 24, 3, 15, 43, 32, 12, 34, 46},
        {28, 33, 34, 3, 10, 26, 50, 18, 2, 25},
        {18, 25, 29, 35, 16, 50, 7, 34, 30, 44},
        {27, 5, 43, 48, 49, 23, 36, 6, 43, 3},
        {46, 2, 49, 22, 33, 13, 43, 28, 24, 50}
    };

    print_info(M1_ROWS, M2_ROWS, M1_COLS, M2_COLS);
    
    check_valid_operation(M1_COLS, M2_ROWS);

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

