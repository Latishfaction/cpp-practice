/*
https://youtu.be/JTttg85xsbo
*/

#include <iostream>
using namespace std;

int main(){
    int a;
    int *p;

    a= 1025;
    p = &a; // storing address of the a

    cout<<"Value of a : "<<a<<endl;
    cout<<"Address of a : "<<&a<<endl;
    
    cout<<"Value of P : "<<*p<<endl;
    cout<<"Address of P : "<<p<<endl;

    char *p0; // character pointer

    p0 = (char*) &p;

    
    cout<<"Value of P : "<<(int*) *p0<<endl;
    cout<<"Address of P : "<<&p0<<endl;




    return 0;
}