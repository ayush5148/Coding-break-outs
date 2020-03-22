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

ll a[N], dp[N]; 

vector<int> v[N];

map <ll,ll> mapp; 

int main() {
    fastIO; 

    ll n,mmax = -1, idx = 1 ;
    cin>>n;

    for (int i=1; i<=n; i++){
    	cin>>a[i]; 
     }

    for (int i=1; i<=n; i++) {
    	dp[i] = mapp[a[i]-1]+1;
    	mapp[a[i]] = max (mapp[a[i]], dp[i]);

    	if (dp[i] > mmax) 
    		idx= i;  
    	mmax = max (mmax, dp[i]); 
    }

    cout << mmax << endl;

    int ele = a[idx] - mmax +1; 
    // debug(ele);
    for (int i=1; i<=n; i++) {
    	if (a[i] == ele) {
    		cout << i<<" ";
    		ele++; 
    	}
    }
}

