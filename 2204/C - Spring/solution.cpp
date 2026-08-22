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
int lcm(int a,int b){
    return (a/gcd(a,b))*b;
}
signed main(){
    needforspeed
    int t;
    cin>>t;
    while(t--){
        int a,b,c,m;
        cin>>a>>b>>c>>m;
       //vin(v,n)
       
      int A=m/a;
      int B=m/b;
      int C=m/c;
      int AB=m/lcm(a,b);
      int BC=m/lcm(c,b);
      int AC=m/lcm(a,c);
      int ABC=m/lcm(a,lcm(b,c));
      int suma=6*A-3*AB-3*AC+2*ABC;
      int sumb=6*B-3*AB-3*BC+2*ABC;
      int sumc=6*C-3*BC-3*AC+2*ABC;  
      cout<<suma<<" "<<sumb<<" "<<sumc<<endl;  
    }
    return 0;
 
}