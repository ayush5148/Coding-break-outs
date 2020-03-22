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
int n,m,b,mod;
int a[N]; 

ll dp[505][505]; 


ll fun () {

    dp[0][0] =1; 

    for (int i=0; i<n ; i++) {

        for (int j=1; j<=m; j++) {

            for (int k=0; k<= b-a[i]; k++) {

                dp[j][k+a[i]] = (dp[j][k+a[i]] + dp[j-1][k])%mod ; 
            }
        }
    }

    ll ans= 0; 
    for (int i=0; i<=b; i++) {
        ans = (ans + dp[m][i] )%mod;
    }

    return ans;
}

int main() {
    fastIO; 
    cin>>n>>m>>b>>mod; 

    for (int i=0; i<n; i++) {
        cin>>a[i]; 
    }

    cout << fun()<<endl ;
}