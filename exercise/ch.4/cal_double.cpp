// to calculate double with +,- / and *. If the user enters an invalid symbol, the program should print nothing

# include <iostream>

// steps
// 1. print and get the number
// 2. check for +,- * and /
// if its valid do the operation else print nothing.

void ch_to_op( char ch, double a, double b){
	// * = 42
	// + = 43
	// - = 45
	// / = 47
	
	int ch_int {static_cast<int>(ch)}; 
	
	if(ch_int == 42){
		std:: cout << a*b << "\n";
	}
	
	else if(ch_int == 43){
		std:: cout << a+b << "\n";
	}
	
	else if(ch_int == 45){
		std:: cout << a-b << "\n";
	}
	
	else if(ch_int == 47){
		std:: cout << a/b << "\n";
	}
	
	else{
		return;
	}
}
int main(){

// Enter one of the following: +, -, *, or /: *
// 6.2 * 5 is 31
	
	double a{};
	double b{};
	char op {};
	std:: cout << "Enter a double value: ";
	std:: cin >> a;
	
	std:: cout << "Enter a double value: ";
	std:: cin >> b;
	
	std:: cout << "Enter one of the following: +, -, *, or /:  ";
	std:: cin >> op;
	ch_to_op(op,a,b);
	
	return 0;
}