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
int a[N];
vector <int> v,v2;

int main() {
    fastIO; 
    int n,k;
    cin>>n>>k;

    ll ans = 1, cnt= 0 ; 

    for (int i=1; i<=n; i++) {
    	cin>>a[i]; 

    	if (a[i] < 0 )
    		cnt++,v.pb(i); 
    }

    int last = -1;

    if (v.size()!= 0)
    	last= n - v[v.size()-1]; 

    for (int i=1; i<v.size(); i++) 
    	v2.pb(v[i] - v[i-1] -1 ); 

    ans = 1+1+2*(v.size() -1 ); 

    // debug2(cnt, ans);

    sort(v2.begin(), v2.end()); 

    if (k < cnt ) {
    	cout << "-1\n";
    	return 0;
    }

    k-=cnt;


    int temp=0, tt= 0 ;

    for (int i=0; i<v2.size(); i++) {
    	if (v2[i] > k)
    		break; 
    	else 
    		ans-=2 , k-= v2[i];  
    }
    // debug(last);

    if (last != -1 && k >= last)
    	ans--; 

    cout << ans; 

}