#include<iostream>

int main() {
    char start = 'C';

    std::cout<<"Switch sem break: \n";
    switch(start) {
        case('A'):{
            std::cout<<"A \n";
        }
        case('B'):{
            std::cout<<"B \n";
        }
        case('C'):{
            std::cout<<"C \n";
        }
        case('D'):{
            std::cout<<"D \n";
        }
        case('E'):{
            std::cout<<"E \n";
        }
    }

    char grade = 'B';

    std::cout<<"Switch com break: \n";
    switch(grade) {
        case('A'): {
            std::cout<<"Grade A. \n";
            break;
        }
        case('B'): {
            std::cout<<"Grade B. \n";
            break;
        }
        case('C'): {
            std::cout<<"Grade C. \n";
            break;
        }
        case('D'): {
            std::cout<<"Grade D. \n";
            break;
        }
        case('E'): {
            std::cout<<"Grade E. \n";
            break;
        }
    }
    
    
    return 0;
}