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
int main() {

    fastIO; 
    int n,m,h;
    cin>>n>>m>>h;

    ll sum = 0; 
    for (int i=1; i<=m; i++)
    	cin>>a[i], sum+= a[i]; 

    if (sum < n) {
    	cout <<"-1\n";
    	return 0; 
    }
    n--;
    sum-=a[h];
    // debug(sum);

    double ans=1; 


    for (int i=1; i<=n ; i++) {
   
    	ans *= (double)(sum-(i-1))/(sum+a[h]-i);  
    }
    ans= 1.0-ans; 

    cout << ans<<endl;
}