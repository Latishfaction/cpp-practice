/*
Get the value from user and printing it's doubled

link : https://www.learncpp.com/cpp-tutorial/function-return-values-value-returning-functions/
*/
#include <iostream>

int getValueFromUser(){
    std::cout<<"Enter the value to be doubled : ";
    
    int n{};
    
    std::cin>>n;
    return n;
}

int main(){
    int x {getValueFromUser()};

    std::cout<<"The double of "<<x<<" is :"<<x*2<<"\n";
}