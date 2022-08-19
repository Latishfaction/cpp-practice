#include <iostream>

using namespace std;

int main(){
    int n;

    cin>>n;

    int rows=1;

    while (rows<=n)
    {
        int column = 1;
        while (column<=n)
        {
            cout<<" "<<rows<<" ";

            column++;
        }
        cout<<endl;


        rows++;        
    }
    
    
    return 0;
} 