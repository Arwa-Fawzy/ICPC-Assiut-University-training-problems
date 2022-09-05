#include <bits/stdc++.h>
using namespace std;

int main()
{

    char s;
    cin>>s;
    if(s>=48&&s<65){
        cout<<"IS DIGIT";
    }else if(s>=65 &&s<97){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }else{
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
}
