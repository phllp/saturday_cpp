#include<iostream>

int main() {
    std::cout << "Multiplication Table" << std::endl;
    
    std::cout << "What's your full name?" << std::endl;
    std::string username;
    std::getline(std::cin, username);

    
    std::cout << "Please " << username << ", provide a base number..." << std::endl;
    int baseNumber; 
    std::cin>>baseNumber;

    std::cout<<"Multiplication Table of " << baseNumber << std::endl;

    for (int i = 0; i <=10; i++) {
        int product = baseNumber * i;
        std::cout << baseNumber << " X " << i << " = " << product << std::endl;
    }

    return 0;
}