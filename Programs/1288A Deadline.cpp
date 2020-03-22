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

int main() {
    fastIO; 

    int t;
    cin>>t;

    while (t--) {
    	int n,d;
    	cin>>n>>d;

    	int ans=-1;

    	if (d <=n )
    		cout << "YES\n";
    	else {

    		ll req= sqrt (n); 

    		ll a1= ceil(d/(req+1))
    	}
    }
    
}