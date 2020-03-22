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
ll dp[N][4]; 
ll a[N];
map <ll, ll> mapp; 

int main() {
    
    fastIO; 
    int n,k; 
    cin>>n>>k;

    for (int i=1; i<=n; i++) {
    	cin>>a[i]; 
    	dp[i][1] = 1; 
    }

    for (int i=1; i<=n; i++) {

    	if (a[i] %k == 0) {
    		ll req= a[i]/k; 
    		dp[i][2] = dp[mapp[req]][1] + dp[mapp[a[i]]][2];
    		dp[i][3] = dp[mapp[req]][2];// + dp[mapp[a[i]]][3]; 

    	}
    	dp[i][1] = dp[mapp[a[i]]][1]+1;
    	mapp[a[i]] = i; 
    }

    ll sum =0; 
    for (int i=1; i<=n; i++) {
    	sum += dp[i][3];
    }
    cout << sum << endl;
}