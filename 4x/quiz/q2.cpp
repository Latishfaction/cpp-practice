/*
https://www.youtube.com/watch?v=WR31ByTzAVQ list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=4
*/
#include <iostream>

using namespace std;
int main(){
    char c;
    cin>>c;
    int x = static_cast<int>(c);
    

    if(x >96 && x<123){
        cout<<"Lower_Case Letter";
    }
    else if (x>64 && x<91)
    {
        cout<<"Upper_Case Letter";
    }
    else if(x>47 && x<58){
        cout<<"It's a Digit";
    }
    
    return 0;
}


/*
ASCII values observation

a = 97 && z=122
A = 65 && Z = 90
'0' =48  && '9' =57
*/