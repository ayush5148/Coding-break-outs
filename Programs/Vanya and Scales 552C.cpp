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

int b,mass;
vector<int>  v;
int main() {
    fastIO; 
    cin>>b>>mass; 

    int nm = mass; 

    while (nm > 0) {
    	int rem = nm % b; 
    	v.pb(rem);
    	nm/=b; 
    }
    v.pb(0);

    for (int i=0; i<v.size()-1; i++) {
    	if (v[i] != 0 && v[i] != 1 && v[i] != b-1 && v[i] != b)
    	{
    		cout <<"NO\n";
    		return 0; 
    	}

    	else if (v[i] == b-1 || v[i] == b)
    		v[i+1]++; 
    }

    cout <<"YES\n";

}