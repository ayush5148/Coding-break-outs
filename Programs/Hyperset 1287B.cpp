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

map <string, int> mapp; 

vector<string> v;
int main() {
    fastIO; 

    int n,k; 
    cin>>n>>k; 

    ll ans= 0; 

    for (int i=0; i<n; i++) {
    	string str; 
    	cin>>str; 
    	mapp[str]= i; 
    	v.pb(str);
    }

    for (int i=0; i<n; i++) {
    	for (int j=i+1; j<n; j++) {

    		string req= ""; 
    		
    		for (int m=0; m<k; m++) {
    			if (v[i][m] == v[j][m]) {
    				req+= v[i][m]; 
    			}
    			else {
    				char freq[100]= {0}; 

    				freq[v[i][m]]++; freq[v[j][m]]++;

    				if (freq['S'] == 0)
    					req+= "S"; 
    				else if (freq['E'] == 0)
    					req+= "E";
    				else 
    					req+= "T";  
    			}
    		}

    		// debug(req);

    		if (mapp.find(req) != mapp.end()) {
    			if (mapp[req] > j)
    				ans++; 
    		}
    	}
    }
    cout << ans<< endl; 
}