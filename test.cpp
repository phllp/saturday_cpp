#include<iostream>
#include<cmath>

int main()
{   
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    double sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCube, volSphere, volCone = 0;
    
    volCube = std::pow(cubeSide, 3);
    
    volSphere = std::pow(sphereRadius, 3.0) * M_PI * (4.0/3.0);
    
    volCone = M_PI * (std::pow(coneRadius, 2)) * (coneHeight/3);
    
    std::cout<<volCube<<std::endl;
    std::cout<<volSphere<<std::endl;
    std::cout<<volCone<<std::endl;
    
}



// Short is normally defined as a 16-bit integer.

//short myVariableName1;  //bytes and  stores from -32768 to +32767
//short int myVariableName2;  //stores from -32768 to +32767
//signed short myVariableName3;  // stores from -32768 to +32767
//signed short int myVariableName4;  // stores from -32768 to +32767
//unsigned short myVariableName5;  // stores from 0 to +65535
//unsigned short int myVariableName6;  // stores from 0 to +65535