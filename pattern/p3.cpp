/*

* * * * * 
* * * *
* * *
* *
*

*/


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // rows in descending manner
    for (int i = n; i >= 1; i--)
    {
        // print the stars till i
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}