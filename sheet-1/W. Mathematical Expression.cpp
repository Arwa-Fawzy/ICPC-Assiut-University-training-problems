#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c; char o, e;
    cin>>a>>o>>b>>e>>c;
    if(a+b==c && o=='+'){
        cout<<"Yes";
    }else if(a-b==c && o=='-'){
        cout<<"Yes";
    }else if(a*b==c && o=='*'){
        cout<<"Yes";
    }else{
        if(o=='+'){
            cout<<a+b;
        }else if (o=='-'){
            cout<<a-b;
        }else if (o=='*'){
            cout<<a*b;
        }
        else{
            cout<<a/b;
        }
    }



}
