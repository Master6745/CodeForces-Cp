#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "
"
#define needforspeed ios::sync_with_stdio(false);cin.tie(nullptr);
signed main(){
    needforspeed
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
       //vin(v,n)
       int cnt=0;
       for(int i=0;i<n;i++){
        int dx,dy,x,y;
        cin>>dx>>dy>>x>>y;
        int tx=(dx==1)?(s-x):x;
        int ty=(dy==1)?(s-y):y;
        if(tx==ty)cnt++;
 
       }
       cout<<cnt<<endl;
        
    }
    return 0;
 
}