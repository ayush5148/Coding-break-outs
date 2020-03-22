#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
typedef pair<int , int> pp;
#define X first
#define Y second
typedef long long int ll;
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const int N = 1e6+1; 

ll a,b, ta,tb; 
vector<ll> va, vb;
ll vis[10]= {0}; 
ll ans=-1;
void fun (ll prev, ll idx) {

    // debug2(prev, idx);
    bool toReturn = true; 

    for (int i=9; i>=0; i--) {
        if (vis[i] != 0)
            toReturn = false; 
    }

    if (toReturn) {

        if (prev <= b)
            ans = max (ans, prev); 
        return;
    }


    if (vis[vb[idx]] != 0) {
        vis[vb[idx]]--;
        fun (prev*10+vb[idx], idx+1); 
        vis[vb[idx]]++; 
    }

    if (vb[idx] != 0 && vis[vb[idx]-1] != 0) {
        // debug2(prev,vb[idx]-1);
        vis[vb[idx]-1]--;
        prev=prev*10+vb[idx]-1;

        for (int i=9; i>=0; i--) {
            while (vis[i] != 0) {
                vis[i]--;
                prev = prev*10 + i;
            }
        }
        if (prev <= b)
            ans = max (ans, prev);
    }
    
}

int main() {
    fastIO; 
    cin>>a>>b; 
    ta=a; 
    tb=b; 

    while (ta>0) {	
    	va.pb(ta%10);
        vis[ta%10]++; 

    	ta/=10;
    }
    while (tb>0) {	
    	vb.pb(tb%10); 
    	tb/=10;
    }

    reverse(va.begin(), va.end());
    reverse(vb.begin(), vb.end()); 

    if (vb.size() > va.size()) {
    	sort(va.begin() ,va.end());

    	for (int i=va.size()-1 ; i>=0; i--) {
    		cout << va[i];
    	}
    }

    else {
        fun (0, 0);
        cout << ans << endl ;
    }

}