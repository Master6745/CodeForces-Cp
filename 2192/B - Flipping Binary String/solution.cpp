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
        string s;
        cin>>n>>s;
       //vin(v,n)
       vector<int>ones,zeros;
       for(int i=0;i<n;i++){
        if(s[i]=='1')ones.push_back(i+1);
        else zeros.push_back(i+1);
       }
       if(ones.size()%2==0){
        cout<<ones.size()<<endl;
        for(int x:ones){
            cout<<x<<" ";
        }
        cout<<endl;
       }
       else if(zeros.size()%2==1){
        cout<<zeros.size()<<endl;
        for(int x:zeros)cout<<x<<" ";
        cout<<endl;
 
       }
       else cout<<-1<<endl;
        
    }
    return 0;
 
}