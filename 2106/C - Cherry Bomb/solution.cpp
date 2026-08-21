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
void solve(){
     int n,k;
        cin>>n>>k;
       vin(a,n)
       vin(b,n)
       int count=0;
       bool check;
       int prevsum=0,sum=-1;
       
       for(int i=0;i<n;i++){
        if(b[i]==-1){
            count++;
            continue;
        }
        int currentsum=a[i]+b[i];
        if(sum==-1)sum=currentsum;
        if(sum!=currentsum){cout<<0<<endl;return;}
        }
       if(count==n){
            long long mx = *max_element(a.begin(), a.end());
            long long mn = *min_element(a.begin(), a.end());
            cout<<(k+1+mn-mx)<<endl;
            return;
       }
       else{
        for(int i=0;i<n;i++){
            int x=sum-a[i];
            if(x<0 || x>k){cout<<0<<endl;return;}
            
        }
        cout<<1<<endl;
        return;
       }
}
signed main(){
    needforspeed
    int t;
    cin>>t;
    while(t--){
       solve();
        
    }
    return 0;
 
}