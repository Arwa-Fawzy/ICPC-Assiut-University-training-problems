#include <bits/stdc++.h>
using namespace std;


int main() {
    long long a,b,n;
    cin>>a>>b>>n;
    if(a%n ==0 && b%n==0){
        cout<<"Both";
    }else if(a%n!=0 && b%n==0){
        cout<<"Momo";
    }else if(b%n!=0 && a%n==0){
        cout<<"Memo";
    }else{
        cout<<"No One";
    }
}
