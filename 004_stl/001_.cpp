#include<iostream>

using namespace std;

template<class x> void sswap(x &a, x &b){

    x temp = a;
    a =b;
    b = temp;
    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of b : "<<b<<endl;
}

int main(){

    int a=5,b=10;
    float c = 3.5, d = 9.8;

    sswap(a,b);
    sswap(c,d);
    return 0;
}