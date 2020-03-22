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
    	int n;
    	cin>>n;
    	string str;
    	cin>>str; 

    	int sum =0, idx1 = -1,idx2=-1, x= -1; 
    	for (int i=0; i<str.length(); i++) {
    		if ( (str[i]-'0') %2 ==1) {
  				idx1= str[i]-'0';
  				x=i;
  				break; 
    		}
    	}

    	for (int i=x + 1; i<str.length(); i++) {
    		if ((str[i]-'0') %2 ==1) {
  				idx2= str[i]-'0';
  				break; 
    		}
    	}
    	// debug2(idx1,idx2);

    	if (idx1!= -1 && idx2 != -1) {
    		cout <<idx1<<idx2<<endl; 
    	}

    	else 
    		cout <<"-1\n"; 
    }
}