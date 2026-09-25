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
        int n,q;
        cin>>n>>q;
        vin(a,n)
        int mn=31;
        while(q--){
            int x;
            cin>>x;
            if(x>=mn)continue;
            mn=x;
            int add=1LL<<(x-1);
            int div=1LL<<x;
            for(int i=0;i<n;i++){
                if(a[i]%div==0)a[i]+=add;
            }
        }
        print(a);
        
        
    }
    return 0;
 
}