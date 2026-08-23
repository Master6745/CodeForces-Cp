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
 int solve(vector<int> &v,int n){
 
     vector<int> d; 
    int mx=0,ans=0;
    for(int i=0;i<n;i++){
       
        mx=max(mx,v[i]);
        int diff=mx-v[i];
        if(diff>0)d.push_back(diff);
    }
    sort(all(d));
    int prev=0;
    int m=d.size();
    for(int i=0;i<m;i++){
        if(d[i]>prev){
            int cnt=m-i;
            ans+=(d[i]-prev)*(cnt+1);
            prev=d[i];
        }
    }
    return ans;
 
 
 }
signed main(){
    needforspeed
    int t;
    cin>>t;
    while(t--){
       int n;
        cin>>n;
        
       vin(v,n)
       cout<<solve(v,n)<<endl;
       
 
        
    }
    return 0;
 
}