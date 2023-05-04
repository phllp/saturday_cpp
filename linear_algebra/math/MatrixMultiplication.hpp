class MatrixMultiplication {

    public:
        int** multiply(int** matrix1, int** matrix2, int rowsM1, int colsM1, int colsM2);
};

int** MatrixMultiplication::multiply(int** matrix1, int** matrix2, int rowsM1, int colsM1, int colsM2) {
    int itter_count = 0;

    int pointer_m1 = 0;
    int pointer_m2 = 0;

    //int output[rowsM1][colsM2];

    int **output = new int*[rowsM1];

    for (int i = 0; i < rowsM1; i++) {
        output[i] = new int[colsM2];
        //Armazenando os valores da linha da matriz em um array próprio
        int m1_row[colsM1];
        for (int j = 0; j < colsM1; j ++) {
            m1_row[j] = matrix1[i][j];
        }

        while (itter_count < colsM1) {
            int m2_current_line = 0;
            int sum = 0;

            for (int k = 0; k < colsM2; k++) {
                //Armazenando os valores da linha da matriz em um array próprio
                int m2_row[colsM2];
                for (int j = 0; j < colsM2; j++) {
                    m2_row[j] = matrix2[m2_current_line][j];
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

    return output;
}

