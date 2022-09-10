#include <bits/stdc++.h>
using namespace std;


int main() {
    string n;
    cin>>n;
    int x=n[0]-'0';
    int y=n[1]-'0';
    if(y%x==0 ||x%y==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


}
