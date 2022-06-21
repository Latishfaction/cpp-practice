/*
Modify the solution to the “best solution” program above so that it outputs like this (assuming user input 4):

Enter an integer: 4
Double 4 is: 8
Triple 4 is: 12

*/

#include <iostream>

int main(void){
    int n{};
    std::cout<<"Enter the n: ";                // printing to enter the message
    std::cin>>n;                            // getting the value of n from user

    std::cout<<"Double "<<n<<" is: "<<n*n<<"\n";   // printing the double value
    std::cout<<"Triple "<<n<<" is: "<<n*n*n<<"\n";

    return 0;
}