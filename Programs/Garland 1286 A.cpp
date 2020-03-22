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
int a[200], vis[200]={0};
int dp[200][200][4];
int n,ce=0, co=0 ; 
vector<int> v;
int fun (int idx, int remeven, int prev) {
	if (idx > n){

		if (remeven == ce)
			return 0;
		return 1e9;
	}

	int &check = dp[idx][remeven][prev]; 

	if (check != -1)
		return check; 
	int ans= 1e9, temp1=1e9, temp2=1e9 ; 

	if (a[idx] == 0) {

		if (remeven <ce)
			temp1 = fun (idx+1, remeven+1, 0);

		if (ce+co-remeven > 0)
			temp2= fun (idx+1, remeven, 1); 

		if (idx == 1)
			ans= min(ans, min (temp1, temp2 )); 

		else if (prev == 1)
			ans= min (ans, min (1+temp1, temp2));
		else 
			ans = min (ans, min (temp1,1+temp2));
	}

	else {

		temp2= fun (idx+1, remeven, a[idx]%2);

		if (idx == 1) {
			ans= min (ans, min(temp2, temp1)); 
		}	

		else if (prev == a[idx]%2)
			ans= min (ans, temp2);
		else 
			ans = min (ans, 1+temp2);

	}
	return  check = ans; 
}

int main() {

    fastIO; 
    cin>>n;
    for (int i=1; i<=n; i++) {
    	cin>>a[i]; 
    	vis[a[i]]++; 
    }

    for (int i=1; i<=n; i++) {
    	if (vis[i] == 0) {
    		if (i%2 == 0)
    			ce++;
    		else
    			co++; 
    	}
    }

    memset(dp, -1 ,sizeof dp);

    int ans= fun (1, 0, 0); 

    cout << ans<< endl ;
}