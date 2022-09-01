/*
    I/P : n=12345
    O/P : 54321

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int rev=0;

    while(n){
        rev = rev*10 + n%10;
        n = n/10;
    }

    cout<<"Reverse: "<<rev<<endl;


return 0;
}