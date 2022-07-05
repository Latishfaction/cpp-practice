/*
 *  *  *  *  * 
 *           *
 *           *
 *           *
 *  *  *  *  *
*/

#include <iostream>
using namespace std;
int main(){
    int rows=0,columns=0;

    cin>>rows>>columns;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            // cout<<"Rows: "<<i<<"\n";
            // cout<<"Coulmns: "<<j<<"\n";
            // checking for 1st and last(the number user entered) rows and column
            if(i==1 || rows==i || j==1||j==columns){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
    return 0;
}