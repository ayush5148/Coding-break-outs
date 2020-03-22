#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(), (a).end()
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define sz() size()
#define fr first
#define sc second
#define pb push_back
#define er erase
#define in insert
#define pi pair<int,int>
#define pii pair<pair<int,int>,int>
#define mp make_pair
#define int long long
#define rc(s) return cout<<s,0
#define rcc(s) cout<<s,exit(0)
using namespace std;
 
const int mod=1e9+7;
const int modx=998244353;
const int per=666013;
 
const int inf=1e9;
 
int x,y,ax,ay,bx,by,c1,c2,t,ans;
vector<pair<int,int>>puncte;
 
int check(int indx){
    int cnt=0;
    int x1=puncte[indx].fr;
    int y1=puncte[indx].sc;
    if(abs(x1-c1)+abs(y1-c2)>t) return 0LL;
    cnt++;
    t-=(abs(x1-c1)+abs(y1-c2));
    for(int i=indx-1;i>=0;i--){
        if(abs(puncte[i].fr-x1)+abs(puncte[i].sc-y1)<=t) cnt++;
        t-=abs(puncte[i].fr-x1)+abs(puncte[i].sc-y1);
        x1=puncte[i].fr;
        y1=puncte[i].sc;
    }
    for(int i=indx+1;i<puncte.size();i++){
        if(abs(puncte[i].fr-x1)+abs(puncte[i].sc-y1)<=t) cnt++;
        t-=abs(puncte[i].fr-x1)+abs(puncte[i].sc-y1);
        x1=puncte[i].fr;
        y1=puncte[i].sc;
    }
    return cnt;
}
 
int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);cout.tie(0);
    srand(chrono::steady_clock::now().time_since_epoch().count());
    cin >> x >> y >> ax >> ay >> bx >> by >> c1 >> c2 >> t;
    puncte.push_back({x,y});
    while(puncte.back().fr<=1e17 && puncte.back().sc<=1e17){
        x=ax*puncte.back().fr+bx;
        y=ay*puncte.back().sc+by;
        puncte.push_back({x,y});
    }
    int tz=t;
    for(int i=0;i<puncte.size();i++){
        t=tz;
        ans=max(ans,check(i));
    }
    rc(ans);
}