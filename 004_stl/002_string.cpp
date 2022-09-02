#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){

    string s = "Hello";
    cout<<s<<endl;

    s = s.append(" World !!!");
    cout<<s<<endl;

    s = s.assign("Faiz");
    cout<<s<<endl;

    s = "Faizzz";
    cout<<s<<endl;

    char c = s[0];
    cout<<c<<endl;
    
    s.clear();
    cout<<s<<endl;
    
    s="Faiz";
    s.append(" Qureshi");
    s.erase(2,5);
    cout<<s<<endl;

    cout<<s.find("Q")<<endl;
    return 0;
}