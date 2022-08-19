// print same no. of rows and columns

#include <iostream>
using namespace std;
int main(){
    int n;

    cin>>n;
    int rows=1;
    
    // rows
    while (rows<=n)
    {
        //coumns
        int columns = 1;
        while(columns<=n){
            cout<<" * ";

            columns++;
        }
        cout<<endl;
        rows++;
        
    }
    
}