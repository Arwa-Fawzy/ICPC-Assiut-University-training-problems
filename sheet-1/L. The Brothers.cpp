#include <bits/stdc++.h>
using namespace std;

int main()
{

    string arr[2][2];
    for(int i=0; i<2; ++i){
        for(int j=0; j<2; ++j){
            cin>>arr[i][j];
        }
    }
    if(arr[0][1]==arr[1][1]){
        cout<<"ARE Brothers";
    }else{
        cout<<"NOT";
    }


}
