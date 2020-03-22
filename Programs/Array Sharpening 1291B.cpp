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

    int t;
    cin>>t;
    while (t--) {
    	int n;
    	cin>>n;
    	a[0]=0; 
    	a[n+1]= 0 ;

    	for (int i=0; i<n; i++) 
    		cin>>a[i];

    	int temp= n/2; 

    	int sharp = true; 

    	if (n==1){
    		cout <<"Yes\n";
    		continue;
    	}

    	// debug3(temp,a[temp],n);
    	if (n%2 == 1) {

    		for (int i=0; i<=temp ; i++) {
    			if (a[i] < i)
    				sharp= false; 
    		}

    		for (int i=n-1; i>= temp; i--) {
    			if (a[i] < n-1-i)
    				sharp = false;
    		}

    		if (sharp) cout <<"Yes\n";
    		else cout <<"No\n"; 
    	}
    	else {
    		// debug3(temp,a[temp],n);

    		for (int i=0; i<=temp ; i++) {
    			if (a[i] < i)
    				sharp= false; 
    		}

    		for (int i=n-1; i>= temp; i--) {
    			if (a[i] < n-1-i)
    				sharp = false;
    		}

    		if (sharp == true) {
    			cout << "Yes\n";
    			continue; 
    		}

    		sharp= true; 
    		for (int i=0; i<=temp-1 ; i++) {
    			if (a[i] < i)
    				sharp= false; 
    		}

    		for (int i=n-1; i>= temp-1; i--) {
    			if (a[i] < n-1-i)
    				sharp = false;
    		}

    		if (sharp) cout <<"Yes\n";
    		else cout <<"No\n";

    	}

    }
}