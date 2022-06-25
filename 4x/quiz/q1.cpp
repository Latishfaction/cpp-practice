/*
Write the following program: The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. The program computes the answer on the two numbers the user entered and prints the results. If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 6.2
Enter a double value: 5
Enter one of the following: +, -, *, or /: *
6.2 * 5 is 31

*/

#include <iostream>

double getValues();
char chooseOperation();
void print(char operato,double a,double b);

int main(){
    
    double a{getValues()};
    double b{getValues()};
    char operation{chooseOperation()};

    print(operation,a,b);

    return 0;
}

double getValues(){

    std::cout<<"Enter a double value : ";
    
    double num{};
    std::cin>>num;

    return num;
}

char chooseOperation(){
    std::cout<<"Enter one of the following: +, -, *, or /:";

    char operat{};
    std::cin>>operat;

    return operat;
}

void print(char operato,double a,double b){
    if (operato =='+'){
        std::cout << a << operato << b << " is " << a + b << '\n';
    }
    else if (operato == '/'){
        std::cout << a << operato << b << " is " << a / b << '\n';
    }
    else if (operato == '-'){
        std::cout << a << operato << b << " is " << a - b << '\n';
    }
    else if (operato == '*'){
        std::cout << a << operato << b << " is " << a * b << '\n';
    }
}