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
        int n;
        char c;
        cin>>n>>c;
       //vin(v,n)
        string s;
        cin>>s;
        if(c=='g'){
            cout<<0<<endl;
            continue;
        }
        string temp=s+s;
        int next=-1;
        int ans=0;
        for(int i=2*n-1;i>=0;i--){
            if(temp[i]=='g')next=i;
            if(temp[i]==c)ans=max(ans,next-i);
        }
        cout<<ans<<endl;
    }
    return 0;
 
}