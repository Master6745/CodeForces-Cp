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
        int n,g=0;
        cin>>n;
      // vin(v,n)
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        g=gcd(g,x);
 
      }
      vector<int>prime={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
      int ans=-1;
      for(auto it:prime){
        if(g%it!=0){
            ans=it;break;
        }
      }
      cout<<ans<<endl;
        
    }
    return 0;
 
}