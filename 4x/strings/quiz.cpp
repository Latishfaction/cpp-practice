/*
https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/\\

Write a program that asks the user to enter their full name and their age. As output, tell the user the sum of their age and the number of letters in their name (use the std::string::length() member function to get the length of the string). For simplicity, count any spaces in the name as a letter.

Sample output:

Enter your full name: John Doe
Enter your age: 32
Your age + length of name is: 40

Reminder: std::string::length() returns an unsigned int. You should static_cast this to an int before adding the age so you don’t mix signed and unsigned values.
*/

#include <iostream>
#include <string>

int main(){
    std::cout<<"Enter your full name: ";
    std::string name{};
    std::getline(std::cin>>std::ws,name);
    
    std::cout<<"Enter your age :";
    int age{};
    std::cin>>age;
    
    std::cout<<"Your age + Length of your name is "<<age + static_cast<int>(name.length());
    return 0;
}