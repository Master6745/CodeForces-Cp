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
bool check(vector<int>v,int d,int parity){
    for(int i=0;i<v.size();i++){
        if(i%2==parity){
            if(v[i]%d!=0)return false;
        }
        else{
            if(v[i]%d==0)return false;
        }
    }
    return true;
}
signed main(){
    needforspeed
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vin(v,n)
       int g1=0,g2=0;
       for(int i=0;i<n;i++){
        if(i%2==0)g1=gcd(g1,v[i]);
        else g2=gcd(g2,v[i]);
       }
       if(check(v,g1,0))cout<<g1<<endl;
       else if(check(v,g2,1))cout<<g2<<endl;
       else cout<<0<<endl;
        
    }
    return 0;
 
}