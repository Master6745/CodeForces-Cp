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
   int n;
   cin>>n;
   vector<string>names={"Sheldon",
        "Leonard",
        "Penny",
        "Rajesh",
        "Howard"};
        int cnt=1;
        while(n>5*cnt){
            n-=5*cnt;
            cnt*=2;
        }
        int idx=(n-1)/cnt;
        cout<<names[idx]<<endl;
 
    return 0;
 
}