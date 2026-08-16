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
        int n,k,q;
        cin>>n>>k>>q;
       //vin(v,n)
        int ans=0,len=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=q)len++;
            else{
                if(len>=k){
                    int cnt=len-k+1;
                    ans+=cnt*(cnt+1)/2;
                }
                len=0;
            }
        }
         if(len>=k){
            int cnt=len-k+1;
            ans+=cnt*(cnt+1)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
 
}