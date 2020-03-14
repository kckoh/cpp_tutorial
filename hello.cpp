#include <iostream>

int main(){
    //Enter an integer: 4
    //Double that number is: 8
    std::cout << "Enter a number: "; 
    int x {}; // define variable x to hold user input
    std::cin >> x ; // get number from keyboard 
    std::cout << "You entered " << x * 2 << '\n';
    return 0;
}