/*
https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/

Use std::getline() to input text

To read a full line of input into a string, you’re better off using the std::getline() function instead. std::getline() requires two arguments: the first is std::cin, and the second is your string variable.

Here’s the same program as above using std::getline():
*/

#include <iostream>
#include <string>
int main()
{
    std::cout<<"Enter you name : ";
    std::string name{};
    std::getline(std::cin>>std::ws,name);

    std::cout<<"ENter you age : ";
    std::string age{};
    std::getline(std::cin>>std::ws,age);

    std::cout<<"Your Name is "<<name<<" and your age is : "<<age;
    return 0;
}