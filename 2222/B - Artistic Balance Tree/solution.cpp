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
        int n,m;
        cin>>n>>m;
        vector<int>odd,even;
        int total=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            total+=x;
            if(i&1)even.push_back(x);
            else odd.push_back(x);
 
        }
        int odds=0,evens=0;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(x&1)odds++;
            else evens++;
        }
        sort(all(odd),greater<int>());
        sort(all(even),greater<int>());
        int marked=0;
        for(int i=0;i<min(odds,(int)odd.size());i++){
            if(i==0||odd[i]>0)marked+=odd[i];
        }
        for(int i=0;i<min(evens,(int)even.size());i++){
            if(i==0||even[i]>0)marked+=even[i];
        }
        cout<<total-marked<<endl;
        
    }
    return 0;
 
}