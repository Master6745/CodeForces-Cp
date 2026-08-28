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
       //vin(v,n)
        vector<vector<int>>v(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
            sort(all(v[i]));
        }
        bool possible=true;
         for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                if(v[i][j]-v[i][j-1]!=n){
                    possible=false;
                    break;
                }    
            }
            if(!possible)break;
        }
        if(!possible){
            cout<<-1<<endl;
            continue;
        }
        map<int,int>ans;
        for(int i=0;i<n;i++){
            ans[v[i][0]]=i;
        }
        for(auto[i,j]:ans){
            cout<<j+1<<" ";
        }
        cout<<endl;
 
 
 
    }
    return 0;
 
}