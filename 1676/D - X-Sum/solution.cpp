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
        cin>>n>>m;
       //vin(v,n)
        vector<vector<int>>v(n,vector<int>(m));
        vector<int>d1(n+m-1,0);
        vector<int>d2(n+m-1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
 
                d1[i-j+m-1]+=v[i][j];
                d2[i+j]+=v[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int sum=d1[i-j+m-1]+d2[i+j]-v[i][j];
                ans=max(ans,sum);
            }
        }
        cout<<ans<<endl;
 
    }
    return 0;
 
}