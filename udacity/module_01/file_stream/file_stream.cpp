#include<iostream>
#include<fstream>
#include<string>

/**
    ifstream my_file Read from file
    fstream my_file Read and Write to file
    ofstream my_file; Write to file
*/
int main() {
    std::cout<<"Program Started"<< std::endl<<std::endl;

    // Writing to file
    // "ios::app" makes the new text to be added at the bottom of the file, instead of overwriting the whole thing
    std::ofstream my_file_write;
    my_file_write.open("../static_files/random_words.txt", std::ios::app);

    if (my_file_write.is_open()) {
        my_file_write << "\n" << "Esquistossomo";
        my_file_write.close();
    }

    // Reading file 
    std::string line;
    std::ifstream my_file_read;
    my_file_read.open("../static_files/random_words.txt");

    if (my_file_read.is_open()) {
        while(std::getline(my_file_read, line)) {
            std::cout<<line<<std::endl;
        }
        my_file_read.close();
    }

    return 0;
}