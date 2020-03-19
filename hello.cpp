#include <iostream>

int main(){
    //Enter an integer: 4
    //Double that number is: 8
    bool b{};
    bool b1{};
    std::cout << std::boolalpha;
    std::cout << "Enter a true or false\n"; 
    std::cin >>b;
    std::cout << "Enter a true or false\n"; 
    std::cin >>b1;
    std::cout << b << b1;
    return 0;
}