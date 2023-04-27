#include<iostream>
#include<cmath>

using namespace std;

int variance(int base, int frequency) {
    return frequency * pow(base, 2);
}
int main() {

    int a = variance((15-55), 4);
    int b = variance((35-55), 4);
    int c = variance((55-55), 5);
    int d = variance((75-55), 4);
    int e = variance((95-55), 3);

    float result = (a + b + c + d + e) / 19.0;

    cout<<result; 
    

    return 0;
}

