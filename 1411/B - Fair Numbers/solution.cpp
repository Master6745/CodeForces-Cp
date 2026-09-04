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
bool fair(int n){
    int temp=n;
    while(temp>0){
        int a=temp%10;
        temp/=10;
 
        if(a!=0 && n%a!=0)return false;
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
       //vin(v,n)
       while(!fair(n))n++;
       cout<<n<<endl;
        
    }
    return 0;
 
}