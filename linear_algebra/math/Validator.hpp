class Validator {

    public:
        void checkValidMatrixSizes(int colsSizeM1, int rowsSizeM2);
};

void Validator::checkValidMatrixSizes(int colsSizeM1, int rowsSizeM2) {
    if (colsSizeM1 != rowsSizeM2) {
        std::cout<<"O tamanho das matrizes não permite uma multiplicação matricial, interrompendo processo. \n";
        exit(EXIT_FAILURE);
    } else {
        std::cout<<"O tamanho das matrizes permite a multiplicação, continuando processo... \n";
    }
}


