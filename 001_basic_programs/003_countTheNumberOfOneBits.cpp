/*
    given integer n=34
    30(binary) = 11110
    ans = 4
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int count=0;
    while(n){
        if(n&1==1){
            count++;
        }
        n = n>>1;

    }
    cout<<count<<endl;


return 0;
}