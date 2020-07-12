#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
#define pb push_back
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fs(s) for(ll i=0;s[i]!='\0';i++)
#define fr(i,a,b) for(ll i=a;i>=b;i--)
#define gcd(a,b) __gcd(a,b)
#define fastio ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);
#define c1(x) __builtin_popcountll(x)
#define setprs(x) cout << fixed << setprecision(x);
const ll mod=1000000007;
const ll sz=100100;
const double PI =3.14159265;
ll power(ll a, ll b, ll m = mod){if(b==0)return 1;else if(b==1)return a%m;else{ll t=power(a,b>>1,m);t=((t%m)*(t%m))%m;if(b&1)return ((t%m)*(a%m))%m;else return t%m;}}
 
//--------------------------------------------------------

void solve()
{
    string s;
    cin>>s;
    int p[100]={0};
    f(i,0,s.length())p[s[i]-97]=1;
    int n;
    cin>>n;
    while(n--){
        string w;
        cin>>w;
        int f=0;
        fs(w){
            if(p[w[i]-97]!=1){cout<<"No";f=1;break;}
        }
        if(f==0)cout<<"Yes";
        cout<<endl;
    }   
}
 
 
int main()
{
    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}