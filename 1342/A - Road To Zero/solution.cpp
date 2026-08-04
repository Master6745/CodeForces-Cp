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
        int x,y,a,b;
        cin>>x>>y;
        cin>>a>>b;
        if(b>=2*a)cout<<(x+y)*a<<endl;
        else{
            int mn=min(x,y);
            int mx=max(x,y);
            cout<<mn*b+(mx-mn)*a<<endl;
        }
        
    }
    return 0;
 
}
//check