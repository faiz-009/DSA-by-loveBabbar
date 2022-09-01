#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){

    if(n==0 || n==1)    return 0;
    int i=2;
    while((i*i)<n){
        if(n%i==0)  return 0;
        i++;
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    
    cout<<isPrime(n)<<endl;

return 0;
}