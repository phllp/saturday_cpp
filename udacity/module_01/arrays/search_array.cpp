/*Goal: practice searching an array in C++
**There is an array of integers. The length of the arrays to be searched 
**varies. A user will enter an integer and the program will search the array.
**If the value is in the array, the program will return the location of 
**the element. If the value is not in the array, the user will be notified 
**that the value is not in the array. To exit the program the user will enter -1.
*/

#include <iostream>
#include <stdio.h>

int main()
{   
    std::cout << "*****     Array Search     ***** \n \n";
    std::cout << "To exit enter -1 \n \n";
    
    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};

    int searchKey, location;

    while (true) {
        std::cout << "Enter a number... \n";
        std::cin >> searchKey;

        if (searchKey == -1) {
            std::cout << "Exiting program. \n";
            break;
        }

        int pos = 0;

        for (int i : searchArray) {
            pos++;
            if (searchKey == i) {
                location = pos;
                break;
            } else {
                location = -1;
            }
        }

    
        if(location != -1)
        {
            std::cout<<searchKey<<" is at location "<<location<<" in the array.\n";
        }
        else
        {
            std::cout<<searchKey<<" is not in the array.\n";
        }
    }
        
    return 0;
}
