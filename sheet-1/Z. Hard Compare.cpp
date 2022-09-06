#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double ans1=b*log(a), ans2=d*log(c);
    if(ans1>ans2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}
