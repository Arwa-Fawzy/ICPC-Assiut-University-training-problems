#include <bits/stdc++.h>
using namespace std;

int main() {
    long long start, end, n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    if((n3<n1&& n4<n1)||(n3>n2 &&n4>n2)){
        cout<<-1;
        return 0;
    }else{
        if(n3>n1){
            start=n3;
        }else{
            start=n1;
        }
        if(n4>n2){
            end=n2;
        }else{
            end=n4;
        }
    }cout<<start<<" "<<end;

}
