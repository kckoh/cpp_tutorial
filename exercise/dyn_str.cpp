// How many names would you like to enter? 5
// Enter name #1: Jason
// Enter name #2: Mark
// Enter name #3: Alex
// Enter name #4: Chris
// Enter name #5: John

// Here is your sorted list:
// Name #1: Alex
// Name #2: Chris
// Name #3: Jason
// Name #4: John
// Name #5: Mark

#include <algorithm> // for std::sort
#include <iostream>
#include <iterator> // for std::size

int main(){
	
	//initialization
	int length{};
	std::cout << "How many names would you like to enter? ";
	std::cin >> length;
	auto *array { new std::string[length]{} };

	// loop to ask name
	for(int i = 0; i < length;i++){
		std::cout << "Enter name #" << i+1 << " :";
		std::cin >> array[i];
	}


	//sorting
	std::sort(array, array+length);
	
	//loop to display names
	{
		for (int i{ 0 }; i < length; ++i)
			std::cout << "name #" << i +1 << " :" << array[i] << '\n';
 	
	std::cout << '\n';
	}
	
	//free array and set array to nullptr
	delete []array;
	array = nullptr;
	
	return 0;
}