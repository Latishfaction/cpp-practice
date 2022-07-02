/*
https://youtu.be/h-HBipu_1P0?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_
*/


#include <iostream>
int main(){
    int a=5;
    int *p;
    p = &a;


    std::cout<<"a = "<<a<<"\n"; // value of a 
    std::cout<<"&a = "<<&a<<"\n"; // address of a

    std::cout<<"p = "<<*p<<"\n"; // value of a
    std::cout<<"p = "<<p<<"\n"; // address of a 
    std::cout<<"&p = "<<&p<<"\n";  // address of the pointer variable
    return 0;
}