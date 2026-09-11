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
    
        char a[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)cin>>a[i][j];
        }
        string ans="CCC";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int x=0;x<3;x++){
                    for(int y=0;y<3;y++){
                        if(x==i &&y==j)continue;
                        if(abs(x-i)>1 ||abs(y-j)>1)continue;
                        for(int p=0;p<3;p++){
                            for(int q=0;q<3;q++){
                                if(p==i && q==j)continue;
                                if(p==x && q==y)continue;
                                if(abs(p-x)>1 || abs(q-y)>1)continue;
                                string s;
                                s+=a[i][j];
                                s+=a[x][y];
                                s+=a[p][q];
                                ans=min(ans,s);
 
                            }
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
 
        
    
    return 0;
 
}