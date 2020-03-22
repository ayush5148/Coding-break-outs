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
int a[N], l[N], r[N];
int main() {
    fastIO; 
    int n;
    cin>>n;
    multiset <int> s; 
    for (int i=1; i<=n; i++) {
    	cin>>a[i]; 
    }
    int ans=0  ; 

    for (int i=0; i<=n+1; i++) {

    	s.insert (a[i] + n-i); 
    	if (!s.empty()) {
    		int temp = *s.begin();
    		// debug2(temp - (n-i), i);
    		l[i] = temp - (n-i); 

    	}
    	
    }


    s.clear();

    int tt = n+1; 
 
    for (int i=n+1; i>=0; i--) {
    	s.insert(a[i] + tt ); 
    	if (!s.empty() ) {
    		int temp = *s.begin();
    		// debug2(temp - tt, i);
    		r[i] = temp-tt;  
    	}
    	tt--; 
    }

    for (int i=1; i<=n; i++) {
    	ans = max (ans , min (l[i], r[i]) ); 
    }

    cout << ans << endl ;

}