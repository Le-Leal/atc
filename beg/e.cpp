#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define srep(i,l,r) for(ll i=l;i<=r;i++)
#define irep(i,r,l) for(ll i=r;i>=l;i--)
using ll = long long;
using ld = long double;
const ll mod=998244353;
#define vout(v) for(auto i :v) cout<<i<<" ";
#define INF 9223300000000000000ll
#define Winf 5e12
#define nl "\n"
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define vl vector<ll>
#define pb push_back
#define vc vector<char>
#define vb vector<bool>
#define uniq(x) sort((x).begin(),(x).end());(x).erase(unique((x).begin(),(x).end()),(x).end())
#define eb emplace_back



void no(void) { cout<<"No"<<nl;}
void yes(void) {cout<<"Yes"<<nl;}
void yn(bool a) {
    cout<<(a ? "Yes":"No")<<nl;
}


vector<ll> dx={-1,0,1,0,1,1,-1,-1};
vector<ll> dy={0,-1,0,1,-1,1,-1,1};

bool isin(ll i,ll j,ll h,ll w) {
    if(i<0 || i>=h || j<0 || j>=w) return false;
    return true;
}

template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}


template<class T>T vecmax(const vector<T>&v){return *max_element(all(v));}
template<class T>T vecmin(const vector<T>&v){return *min_element(all(v));}

ll safemod(ll num,ll rule) {
    return (num%rule+rule)%rule;
}
//ファイル読み込みは第二フォルダから ex:include "mathtype/hoge.hpp"

int main() {
    ll n,m; cin>>n>>m;
    vector<vl> dist(n+1,vl(n+1,Winf));
    rep(i,n+1) dist[i][i]=0;
    rep(i,m) {
        ll a,b,c; cin>>a>>b>>c;
        a--;b--;
        chmin(dist[a][b],c);
        chmin(dist[b][a],c);
    }
    ll k,t; cin>>k>>t;
    rep(i,k) {
        ll a; cin>>a; a--;
        chmin(dist[a][n],t);
        chmin(dist[n][a],0ll);
    }
    rep(k,n+1) rep(i,n+1) rep(j,n+1) chmin(dist[i][j],dist[i][k]+dist[k][j]);
    ll q; cin>>q;
    vl res;
    rep(qq,q) {
        ll ty; cin>>ty;
        if(ty==1) {
            ll x,y,c; cin>>x>>y>>c;
            x--;y--;
            chmin(dist[x][y],c);
            chmin(dist[y][x],c);
            rep(i,n+1) rep(j,n+1) {
                chmin(dist[i][j],dist[i][x]+c+dist[y][j]);
                chmin(dist[i][j],dist[i][y]+c+dist[x][j]);
            }
        }
        if(ty==2) {
            ll s; cin>>s;
            s--;
            chmin(dist[s][n],t);
            chmin(dist[n][s],0ll);
            rep(i,n+1) rep(j,n+1) {
                chmin(dist[i][j],dist[i][s]+t+dist[n][j]);
                chmin(dist[i][j],dist[i][n]+0+dist[s][j]);
            }
        }
        if(ty==3) {
            ll ans=0;
            rep(i,n) rep(j,n) ans+=(dist[i][j]==Winf ? 0:dist[i][j]);
            res.pb(ans);
        }
    }
    for(auto i:res) cout<<i<<nl;
}