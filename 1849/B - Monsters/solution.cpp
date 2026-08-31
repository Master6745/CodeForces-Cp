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
      // vin(v,n)
        vector<pair<int,int>>v;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            int rem=x%k;
            if(rem==0)rem=k;
            v.push_back({rem,i});
 
        }
        sort(all(v),[](auto &a,auto &b){
            if(a.first!=b.first)return a.first>b.first;
            return a.second<b.second;
        });
        for(auto &p:v){
            cout<<p.second<<" ";
        }
        cout<<endl;
    }
    return 0;
 
}