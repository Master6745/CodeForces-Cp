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
    
        int n,k;
        cin>>n>>k ;
        vin(v,n)
        int sum=0;
        for(int i=0;i<k;i++)sum+=v[i];
        int minsum=sum;
        int ans=0;
        for(int i=k;i<n;i++){
            sum+=v[i];
            sum-=v[i-k];
            if(sum<minsum){ 
            minsum=sum;
            ans=i-k+1;
            }
        }
        cout<<ans+1<<endl;
        
    
    return 0;
 
}