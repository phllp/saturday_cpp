#include<random>

class MatrixGenerator {
    public:
        int** generateMatrix(int rows, int columns);
        int getRandomInteger();

};



int** MatrixGenerator::generateMatrix(int rows, int columns) {
    //int** matrix[rows][columns];

    int** matrix = new int*[rows];

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = getRandomInteger();
        }
    }

    return matrix;
}

int MatrixGenerator::getRandomInteger() {
    std::default_random_engine gerador(std::random_device{}());
    std::uniform_int_distribution<int> distribuicao(1,100);
    return distribuicao(gerador);
}