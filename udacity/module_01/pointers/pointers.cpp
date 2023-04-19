Udacity Logo
My Programs
Pointers

8 minutes remaining

1. Why Learn Pointers

2. How are pointers used?

3. Pointers

4. Dereferencing Pointers

5. Pointers Programming Quiz

6. Pointers Programming Answer

7. More on Pointers Answer

    8. Student Playground

    My Programs

Pointers

    Pointers Programming Answer

Pointers Programming Answer


//*Sample program for Pointers*/

#include<iostream>
#include<string>

int main()
{
    std::string name;
    int givenInt;
    float givenFloat;
    double givenDouble;
    std::string givenString;
    char givenChar;
    int *pointerGivenInt;
    int **pointerPointerGivenInt;

    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;

   //Get the values of each variable
    std::cout<<"integer = \n";
    std::cin>>givenInt;
    std::cout<<"float = \n";
    std::cin>>givenFloat;
    std::cout<<"double = \n";
    std::cin>>givenDouble;
    //We need to use cin.ignore so cin will ignore 
   //the characters in the buffer leftover
   //from the givenDouble
    std::cin.ignore();
    std::cout<<"character = \n";
    std::cin>>givenChar;
    
    std::cout<<"string = \n";
    std::cin.ignore();
    std::getline (std::cin,givenString);


    //The value stored in the data
    std::cout<<"integer = "<<givenInt<<"\n";
    std::cout<<"float = "<<givenFloat<<"\n";
    std::cout<<"double = "<<givenDouble<<"\n";
    std::cout<<"string = "<<givenString<<"\n";
    std::cout<<"character = "<<(char)givenChar<<"\n\n";

    //The address of the data - use pointers
    std::cout<<"address integer = "<<&givenInt<<"\n";
    std::cout<<"address float = "<<&givenFloat<<"\n";
    std::cout<<"address double = "<<&givenDouble<<"\n";
    std::cout<<"address string = "<<&givenString<<"\n";
    std::cout<< "address character = " << (void *) &givenChar<<"\n\n";

   //Use indirection to the get the value stored at the address
    std::cout<< "pointer of givenInt = " << *pointerGivenInt<<"\n";
    std::cout<< "pointer of pointer of givenInt = " << **pointerPointerGivenInt<< "\n";

    return 0;
}

The sample program creates the output shown below.

integer = 
float = 
double = 
character = 
string = 
integer = 32
float = 64.212
double = 4.76545
string = Hey look at me! I know pointers!"
character = *

address integer = 0x7ffd812a9258
address float = 0x7ffd812a925c
address double = 0x7ffd812a9278
address string = 0x7ffd812a9270
address character = 0x7ffd812a9257

pointer of givenInt = 32
pointer of pointer of givenInt = 32

Udacity GPT

Powered by OpenAI

How can I help?
Type message

Pointers