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
        int n,m;
        cin>>n;
       vin(r,n)
        cin>>m;
        vin(b,m)
        int sum=0;
        int mx1=0;
        for(auto x:r){
            sum+=x;
            mx1=max(mx1,sum);
        }
        sum=0;
        int mx2=0;
        for(auto x:b){
            sum+=x;
            mx2=max(mx2,sum);
        }
        cout<<mx1+mx2<<endl;
        
    }
    return 0;
 
}