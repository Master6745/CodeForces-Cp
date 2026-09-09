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
    int q;
    cin>>q;
    while(q--){
        string s,t;
        cin>>s>>t;
       //vin(v,n)
       if(s+t != t+s){
        cout<<-1<<endl;
        continue;
       }
       int n=s.size();
       int m=t.size();
       int l=lcm(n,m);
       string ans="";
       for(int i=0;i<l/n;i++){
        ans+=s;
       }
       cout<<ans<<endl;
 
        
    }
    return 0;
 
}