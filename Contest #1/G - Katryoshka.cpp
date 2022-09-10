#include <bits/stdc++.h>
using namespace std;


int main() {
    long long x,y,z,i,ans;
    cin>>x>>y>>z;
    i=min(min(x,y),z);
    ans+=i;
    x=x-i;
    y=y-i;
    z=z-i;
    i=min(x/2,z);
    ans+=i;
    cout<<ans;
}
