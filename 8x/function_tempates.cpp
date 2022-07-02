/*
https://www.learncpp.com/cpp-tutorial/function-template-instantiation/
*/

#include <iostream>
template <typename I>

// initializing function template
I max(I x, I y){
    return x>y?x:y;
}

int main(){
    // syntax of templates instantition
    // func_name <type> (parameter)
    std::cout<<max<int>(1,2)<<"\n";
    std::cout<<max<double>(1.1545,2.646)<<'\n';
    std::cout<<max<char>('L','A')<<'\n';
    return 0;
}