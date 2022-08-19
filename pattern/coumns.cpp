/*

n = 5

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int rows=0;
    while (rows<n)
    {
        int columns=1;
        while (columns<=n)
        {
            cout<<columns<<" ";
            columns++;
        }
        cout<<endl;
        rows++;
    }
    


    return 0;
}