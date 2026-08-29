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
        int l,r,L,R;
        cin>>l>>r;
        cin>>L>>R;
       //vin(v,n)
       if(r<L)cout<<1<<endl;
       else if(R<l)cout<<1<<endl;
       else{
        int a=max(l,L);
        int b=min(r,R);
        int ans=b-a;
        if(r!=R)ans++;
        if(l!=L)ans++;
        cout<<ans<<endl;
       }
        
    }
    return 0;
 
}