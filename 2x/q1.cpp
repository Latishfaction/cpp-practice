/*
Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions:

    > A function named “readNumber” should be used to get (and return) a single integer from the user.
    > A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
    > A main() function should be used to glue the above functions together.

    * Hint: You do not need to write a separate function to do the adding (just use operator+ directly).

    * Hint: You will need to call readNumber() twice.
*/

#include <iostream>

int readNumber();
void writeAnswer(int x);

int main(){
    int x{readNumber()};
    int y{readNumber()};

    // get the number
    writeAnswer(x+y);

}

int readNumber(){
    int x{};
    std::cout<<"Enter the value : ";
    std::cin>>x;

    return x;    
}

void writeAnswer(int x){
    std::cout<<"Addition is :"<<x;
}