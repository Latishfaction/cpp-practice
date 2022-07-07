/*
pointer arithmetic
https://youtu.be/X1DcpcgSUXw
*/

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;

    cout<<"Value of a : "<<a<<endl;
    cout<<"Address of a : "<<&a<<endl;
    cout<<"Size of a : "<<sizeof(int)<<endl;
    
    cout<<"Value of P : "<<*p<<endl;
    cout<<"Address of P : "<<p<<endl;

    cout<<"Value of P : "<<*p<<endl; // same value as a
    cout<<"Address of P : "<<p+1<<endl; // different address than a , increased by 4 bytes

    return 0;
}