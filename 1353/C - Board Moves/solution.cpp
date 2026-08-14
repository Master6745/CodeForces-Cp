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
        cin>>n;
        int half=n/2;
        int count=0;
        for(int i=0;i<half;i++){
            int a=n-2*i;
            int b=n-2*(i+1);
            count+=(a*a - b*b)*(half-i);
 
        }
       cout<<count<<endl; 
    }
    return 0;
 
}