/*
        *
      * *
    * * *
  * * * *
* * * * * 
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    // rows
    for(int i=0;i<n;i++){
        // space in decreasing
        for(int space = n-1;space>i;space--){
            cout<<"  ";
        }
        //stars in increasing
        for(int j = 0;j<i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}