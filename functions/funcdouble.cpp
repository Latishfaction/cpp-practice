/*

Write a function called doubleNumber() that takes one integer parameter. The function should return double the value of the parameter.

https://www.learncpp.com/cpp-tutorial/introduction-to-function-parameters-and-arguments/
*/

#include <iostream>

int doubleNumber(int num){
    return num*2;
}

int main(){
    std::cout<<"Enter the number to be doubled : ";
    int x{};
    std::cin>>x;
    std::cout<<doubleNumber(x);
    return 0;
}