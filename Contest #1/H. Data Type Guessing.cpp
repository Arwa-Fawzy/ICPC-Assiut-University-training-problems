#include <bits/stdc++.h>
using namespace std;


int main() {
    double a,k,n;
    cin>>n>>k>>a;
    double x=n*k/a;
    long long y=n*k/a;
    if (x-y>0){
        cout<<"double";
    }else if (x>2147483647){
        cout<<"long long";
    }else{
        cout<<"int";
    }


}
