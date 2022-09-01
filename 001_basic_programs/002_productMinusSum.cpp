#include<bits/stdc++.h>
using namespace std;

class solution{

public:
    int productMinusSum(int n){

        int sum=0;
        int pro=1;
        while(n){
            pro *= n%10;
            sum += n%10;
            n=n/10; 
        }
        return pro-sum;
    }
};

int main(){
    
    solution s;
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<s.productMinusSum(n);
return 0;
}