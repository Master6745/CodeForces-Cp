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
        string s,t;
        cin>>s>>t;
        int j=0;
        for(int i=0;i<(int)s.size()&&j<(int)t.size();i++){
            if(s[i]=='?'){
                s[i]=t[j];
                j++;
            }
            else if(s[i]==t[j])j++;
            
        }
        if(j==(int)t.size()){
            for(char &c:s){
                if(c=='?')c='a';
            }
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    return 0;
 
}