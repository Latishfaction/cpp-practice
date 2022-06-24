/*
Write a short program where the user is asked to enter a single character. Print the value of the character and its ASCII code, using static_cast.

The program’s output should match the following:

Enter a single character: a
You entered 'a', which has ASCII code 97.

*/

#include <iostream>

int main()
{
    std::cout<<"Enter a single character : ";
    char c{};
    std::cin>>c;
    std::cout<<"You entered \'"<<c<<"\', which has ASCII code " << static_cast<int>(c);
}