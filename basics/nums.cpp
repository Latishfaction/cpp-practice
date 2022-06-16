/* 
 we’re going to get the user’s input. We’ll use std::cin and operator>> to get the user’s input. But we also need to define a variable to store that input for use later.
*/

#include <iostream>

int main(){
    std::cout<<"Enter the vaue of x : ";
    int x{};
    std::cin>>x;
    std::cout<<"The value of x is "<<x;
    return 0;
}