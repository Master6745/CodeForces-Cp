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
        int ans=0;
        int power =1;
        int x=0;
        while(n>0){
            int digit=n%3;
            if(digit>0){
                if(x==0){
                    ans+=digit*3;
                }
                else{
                    int cost=3*power+x*(power/3);
                    ans+=digit*cost;
                }
            }
            n/=3;
            power*=3;
            x++;
        }
        cout<<ans<<endl;
    }
    return 0;
 
}