#include "io.h"
#include <iostream>

int readNumber(){
    int x {};       // define variable x to hold user input
    std::cout << "enter a number: ";
    std::cin >> x ; // get number from keyboard 
    return x;
}

void writeAnswer(int x){
    std::cout << " = " << x << "\n"; // output the parameter
}
