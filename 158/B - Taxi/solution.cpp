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
   
        int n;
        cin>>n;
        int ans=0;
        vector<int>v(n);
        //vin(v,n)
        
        int c1=0,c2=0,c3=0,c4=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1)c1++;
           else  if(v[i]==2)c2++;
           else  if(v[i]==3)c3++;
            else c4++;
        }
        ans+=c4;
        int p31=min(c3,c1);
        ans+=p31;
        c3-=p31;
        c1-=p31;
        ans+=c3;
        ans+=c2/2;
        c2%=2;
        if(c2){ans++;
        c1=max(0LL,c1-2);
        }
        ans+=(c1+3)/4;
        
 
        cout<<ans<<endl;
      
 
    return 0;
 
}