class PrintUtils {
    int rowsM1;
    int rowsM2;
    int colsM1;
    int colsM2;

    public:
        PrintUtils(int inRowsM1, int inRowsM2, int inColsM1, int inColsM2);
        void printHeader();
};

PrintUtils::PrintUtils(int inRowsM1, int inRowsM2, int inColsM1, int inColsM2) {
    rowsM1 = inRowsM1;
    rowsM2 = inRowsM2;
    colsM1 = inColsM1;
    colsM2 = inColsM2;
}

void PrintUtils::printHeader() {
    std::cout << "**************************** \n";
    std::cout << "******    MATRICES    ****** \n";
    std::cout << "**************************** \n";
    
    std::cout << std::endl;
    std::cout << "Matrix 1 \n";
    std::cout << "\tRows: " << rowsM1 <<" \n";
    std::cout << "\tCols: " << colsM1 <<" \n";
    std::cout << std::endl;
    std::cout << "Matrix 2 \n";
    std::cout << "\tRows: " << rowsM2 <<" \n";
    std::cout << "\tCols: " << colsM2 <<" \n";
    std::cout << std::endl;
}