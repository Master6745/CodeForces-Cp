#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cyes cout<<"YES
";
#define cno cout<<"NO
";
#define endl "
"
#define yesno(check) cout << (check ? "YES" : "NO") << '
';
#define all(x) (x).begin(),(x).end()
#define needforspeed ios::sync_with_stdio(false);cin.tie(nullptr);
#define vin(v,n) vector<int> v(n); for(auto &x:v) cin>>x;
#define print(v) for(auto x:v) cout<<x<<" "; cout<<endl;
signed main(){
    needforspeed
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vin(v,n)
       
       if(n==1&&v[0]==0){cout<<1<<endl;continue;}
       else if(n==1) {cout<<0<<endl;continue;}
       
       vector<int>prefix(n);
       prefix[0]=v[0];
       for(int i=1;i<n;i++){
        prefix[i]=v[i]+prefix[i-1];
       }
       int cnt=0,mx=0;
       for(int i=0;i<n;i++){
        mx=max(mx,v[i]);
        if(prefix[i]==(2*mx))cnt++;
       }
 
       cout<<cnt<<endl; 
    }
    return 0;
 
}