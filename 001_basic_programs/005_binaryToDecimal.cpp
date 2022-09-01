/*
    i/p : 7
    o/p : 111

*/

#include<bits/stdc++.h>
using namespace std;

int reverse(int n){

    int rev = 0;
    while(n){

        rev = rev*10 + n%10;
        n = n/10;
    }
    return rev;
}

void decimalToBinary(int n){

    int arr[10] ={0};
    int i=0;
    while(n){
        arr[i] = n%2;
        n = n/2;
        i++;
    }
    
    for(int j=i;j>=0;j--){
        cout<<arr[j];
    }
    cout<<endl;
    
}

int main(){
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    //cout<<"Binary of "<<n<<" is: "<<decimalToBinary(n)<<endl;
    decimalToBinary(n);

return 0;
}