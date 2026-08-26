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
#define rall(x) (x).rbegin(),(x).rend()
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
       vin(b,k)
       sort(rall(a));
       sort(all(b));
       int ans=0;
       int pos=0;
       for(auto it:b){
        if(pos+it>n)break;
        for(int i=0;i<it-1;i++)ans+=a[pos++];
        pos++;
 
       }
       while(pos<n)ans+=a[pos++];
       cout<<ans<<endl;
 
        
    }
    return 0;
 
}