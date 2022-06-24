/*
A prime number is a whole number greater than 1 that can only be divided evenly by 1 and itself. Write a program that asks the user to enter a number 0 through 9 (inclusive). If the user enters a number within this range that is prime (2, 3, 5, or 7), print “The digit is prime”. Otherwise, print “The digit is not prime”.

Hint: Use a chain of if-else statements to compare the number the user entered to the prime numbers to see if there is a match.
*/

#include <iostream>

bool is_Prime(int x);

int main()
{
    std::cout<<"Enter the Number : ";
    int x{};
    std::cin>>x;

    if (is_Prime(x))
        std::cout<<x<<" is prime";
    else
        std::cout<<x<<" is not prime";


    return 0;
}

bool is_Prime(int x){
    if (x==2)
    return true;
    else if (x==3)
    return true;
    else if (x==5)
    return true;
    else if (x==7)
    return true;


    return false;
}