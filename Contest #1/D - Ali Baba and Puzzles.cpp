#include <bits/stdc++.h>
using namespace std;


int main() {
    long long a,b,c,s;
    cin>>a>>b>>c>>s;
    if(a*b-c==s){
        cout<<"YES";
    }else if(a-b*c==s){
        cout<<"YES";
    }else if(a+b-c==s){
        cout<<"YES";
    }else if(a-b+c==s){
        cout<<"YES";
    }else if (a*b+c==s){
        cout<<"YES";
    }else if (a+b*c==s){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
