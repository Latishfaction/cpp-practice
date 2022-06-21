/*
https://www.learncpp.com/cpp-tutorial/introduction-to-the-preprocessor/
*/

#include <iostream>
#define PRINT
int main(){
	#ifdef PRINT
	std::cout<<"Printing";
	#endif
	#ifdef PRINTS
	std::cout<<"Various printings";
	#endif
	return 0;
}