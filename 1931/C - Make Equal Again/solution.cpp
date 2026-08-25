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
       int left=1;
       int right=1;
       while(left<n && v[left]==v[0])left++;
       while(right<n && v[n-1-right]==v[n-1])right++;
       int ans;
       if(v[0]==v[n-1]){
        ans=max(0LL,n-left-right);
        
        }
       else ans=min(n-left,n-right);
       cout<<ans<<endl;
       
        
    }
    return 0;
 
}