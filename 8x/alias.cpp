/*
https://www.learncpp.com/cpp-tutorial/typedefs-and-type-aliases/
*/

#include <iostream>
int main(){
    using var  = int;

    var x{5};
    std::cout<<x;

}