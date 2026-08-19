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
       //vin(v,n)
       string s;
       cin>>s;
       int ans=0,count=0;
       for(char c:s){
        if(c=='1')ans++;
        else count++;
       }
       if(ans==0){
         
         cout<<(n+2)/3<<endl;
         continue;
    }
       int left=0;
       for(int i=0;i<s.size();i++){
        
        
        if(s[i]=='1'){
            int count=i-left;
            if(left==0)ans+=(count+1)/3;
            
            else ans+=count/3;
 
            left=i+1;
        }
        
       }
       if(left<n){
        int len=n-left;
        ans+=(len+1)/3;
       }
      cout<<ans<<endl;
        
    }
    return 0;
 
}