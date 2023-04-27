/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int userInput[] = {
        43, 32, 21, 23, 43, 98, 90, 65, 53, 42, 
        69, 79, 82, 7, 1, 63, 64, 90, 87, 96, 
        4, 55, 3, 7, 2, 1, 67, 89, 543, 567,  985, 
        34, 975, 890, 4567, 23, 33, 9, 56, 345, 9865};
    /**
    int input;
    for(int i = 0; i <10; i++)
    {
        std::cout<<"Add number " << i + 1 << "\n";
        std::cin>>input;
        userInput[i] = input;
    }
    */

    //std::cout<<std::endl;

    std::cout<<"Numbers in order: ";
    for (int i = 0; i <= 40; i++) {
        std::cout<<userInput[i] << " ";
    }

    std::cout<<std::endl;

    std::cout<<"Numbers in reversed order: ";
    for (int i = 40; i >= 0; i--) {
        std::cout<<userInput[i] << " ";
    }

    int i = 0;
    int size = sizeof(userInput)/sizeof(userInput[0]);
    std::cout<<"\n"<<size;
    while (true) {
        int current = userInput[i];
        int next = userInput[i + 1];

        if (current > next) {
            userInput[i] = next;
            userInput[i + 1] = current;
            i = 0;
            continue;
        }
        if((i + 1) >= size){
            break;
        }
        i++;
    }
    std::cout<<std::endl;
    std::cout<<"Numbers in order: ";
    for (int i = 0; i <= 40; i++) {
        std::cout<<userInput[i] << " ";
    }

    return 0;
}
/*
for(int i = 0; i < 40; i++)
     {
         for(int j = 0; j < 39 - i; j++)
             {
                 if(userInput[j] > userInput[j + 1])
                 {
                     int temp;
                     temp=userInput[j];
                     userInput[j]=userInput[j + 1];
                     userInput[j + 1]=temp;
                 }
             }
     }
*/