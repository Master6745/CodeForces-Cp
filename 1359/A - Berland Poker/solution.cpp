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
        int n,m,k;
        cin>>n>>m>>k;
        if(m==0){cout<<0<<endl;continue;}
        if(m==1){cout<<1<<endl;continue;}
        int x=n/k;
        if(x>=m)cout<<m<<endl;
        else{
            int ans=x-ceil((double)(m-x)/(double)(k-1));
            cout<<ans<<endl;
        }
        
    }
    return 0;
 
}