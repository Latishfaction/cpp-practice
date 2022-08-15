/*
https://www.youtube.com/watch?v=WR31ByTzAVQ&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=4
*/

// sum of all even number using while loop

#include <iostream>

using namespace std;

int main(){
    
    cout<<"Enter the end range of number : ";
    int c;
    cin>>c;
    int i=0;
    int sum=0;

    while (i<=c)
    {
        if(i%2==0){
            sum +=i;
        }
        i=i+1;
    }

    cout<<"sum = "<<sum<<endl;
    
    return 0;
}