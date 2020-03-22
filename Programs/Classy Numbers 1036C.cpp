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

ll C[1000][1000]; 

ll ncr(int n, int k) 
{ 
    int i, j; 
    for (i = 0; i <= n; i++) 
    { 
        for (j = 0; j <= min(i, k); j++) 
        { 
            if (j == 0 || j == i) 
                C[i][j] = 1; 
            else
                C[i][j] = C[i - 1][j - 1] + 
                          C[i - 1][j]; 
        } 
    } 

  
    return C[n][k]; 
} 


vector<int> vl, vr ;

ll fun (vector<int> v) {

	ll ans= 0, cnt =0 ; 
	for (int i=0; i<v.size(); i++) {

		if (v[i] == 0)
			continue ;

		ll rem = v.size() - (i+1); 

		if (cnt<= 3) {

			for (int j=0; j<= 3-cnt; j++) {
				ans+= C[rem][j]*pow(9, j); 
			}

			for (int j=0; j<= 2-cnt; j++) {
				ans+= (v[i]-1)*C[rem][j]*pow(9,j); 
			}
		}
		cnt++; 
	}
	if (cnt <= 3)
		ans++; 

	return ans; 
}

int main() {
    fastIO; 
    ncr(500,500); 
    int t;
    cin>>t; 


    while (t--) {
    	ll l,r;
    	cin>>l>>r; 
    	l--;
    	ll l1= l, r1= r;
    	vl.clear();
    	vr.clear();

    	while (l1 > 0) {
    		vl.pb(l1%10); 
    		l1/=10; 
    	}

    	while(r1 > 0 ) {
    		vr.pb(r1%10); 
    		r1/=10 ;
    	}

    	reverse(vl.begin(), vl.end()); 
    	reverse(vr.begin(), vr.end());

    	ll t1= fun (vr), t2= fun (vl);
    	cout << t1-t2 <<endl ;
    	// cout << fun (vr); 

    }

}