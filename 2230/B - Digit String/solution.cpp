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
        string s;
        cin>>s;
        int dp[5]={0};
        int best=0;
        for(char ch:s){
            int x=ch-'0';
            if(x==4)continue;
            int cur=1;
            for(int d=1;d<=3;d++){
                if((10*d+x)%4!=0)cur=max(cur,dp[d]+1);
            }
            dp[x]=max(dp[x],cur);
            best=max(best,dp[x]);
        }
        cout<<(int)s.size()-best<<endl;
 
        
    }
    return 0;
 
}