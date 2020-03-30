#include <iostream>
 
int main()
{
    std::cout << "Enter a positive integer: ";
    int length{};
    std::cin >> length;
 
    int *array{ new int[length] }; // use array new.  Note that length does not need to be constant!
 
    std::cout << "I just allocated an array of integers of length " << length << '\n';
	int i;
	for(i = 0; i < length; i++){
		std::cout << array[i] << '\n';
	}
 
 
    delete[] array; // use array delete to deallocate array
 
    // we don't need to set array to nullptr/0 here because it's going to go out of scope immediately after this anyway
 
    return 0;
}