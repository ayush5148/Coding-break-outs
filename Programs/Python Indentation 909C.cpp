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
#define mod 1000000007
const int N = 5002; 
char a[N]; 
ll dp[N][N]; 

int main() {

    fastIO; 
    int n;
    cin>>n; 

    for (int i=1; i<=n; i++) {
    	cin>>a[i]; 
    }

    for (int i=0; i<=n; i++) {
    	dp[0][i]= 1; 
    }


    a[0]='f';

    for (int i=1; i<=n; i++) {

		for (int j=0; j<=n; j++) {

			if (a[i-1] == 'f'){
				// debug(i);
				dp[i]= (dp[i]+dp[j])%mod;
			}

			else {

			}
    	}
	}

    cout << dp[n] <<endl; 
}