#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) ((v).begin()), ((v).end())
#define foi(n) for (long long i=0; i<n; ++i)
#define foj(n) for (long long j=0; j<n; ++j)
#define rev(a) reverse(a.begin(), a.end());
#define sz(x) x.size()
#define v(s) vector<int> s
 
int convert( string s) {
   int x;
   x = stoi( s );
   return x;
}
 

void solve(){
   ll n=5, arr[]={1,2,7,3,7}, q[]={7,9,2}, x[501];
   fill(x, x + 501, -1);
   for(ll i=n-1;i>=0;--i){
       if(x[arr[i]]==-1){
           x[arr[i]]=i;
       }
   }
   foi(3){
       cout<<x[q[i]]<<endl;
   }
}

 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    //ll t; cin>>t;
    ll t=1;
    while(t--){
        solve();
    }
    #ifndef ONLINE_JUDGE
        freopen("input.in","r",stdin);
    #endif
    
 
 
}