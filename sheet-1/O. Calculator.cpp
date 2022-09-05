#include <bits/stdc++.h>
using namespace std;

int main()
{

    char s,ans;
    cin>>s;
    if(s>=65 &&s<97){
        ans=s+32;
        cout<<ans;
    }else{
        ans=s-32;
        cout<<ans;
    }
}
