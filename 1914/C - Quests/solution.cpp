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
        int n,k;
        cin>>n>>k;
       vin(a,n)
       vin(b,n)
       int ans=0,sum=0,mx=0;
       int limit=min(n,k);
       for(int i=0;i<limit;i++){
        sum+=a[i];
        mx=max(mx,b[i]);
        int curr=sum+(k-(i+1))*mx;
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
        
    }
    return 0;
 
}