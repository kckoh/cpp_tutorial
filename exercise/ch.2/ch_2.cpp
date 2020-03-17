// purpose: reads two separate integers from the user, adds them together, and then outputs the answer
#include "io.h"
#include <iostream>

int main(){
    // read two numbers and outputs the answer

    int x  {readNumber()};
    int y  {readNumber()};
    std::cout << x << " + " << y; 
    writeAnswer(x + y);
    return 0;
}