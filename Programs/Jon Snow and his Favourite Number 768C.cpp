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

int freq[1025]={0}; 
int main() {
    fastIO; 
    int n,k,x;
    cin>>n>>k>>x;

    for (int i=1; i<=n; i++)
    	cin>>a[i], freq[a[i]]++;

    int cnt = 0; 
    while (k--) { 

    	int temp[1025] = {0}; 

    	for (int i=0; i<=1023; i++) {
    		int cur = freq[i]; 
    		int tt = i^x; 

    		if (cur%2 == 0) {
    				temp[tt]+= cur/2;
    				temp[i]+= cur/2; 
    		}

    		else if (cnt%2 == 0) {

				temp[tt]+= cur/2+1;
				temp[i]+= cur/2; 

    		}
    		else {

				temp[tt]+= cur/2;
				temp[i]+= cur/2+1; 
    		}

    		cnt+= freq[i];
    	}

    	for (int i=0; i<1024 ; i++) {
    		freq[i] = temp[i]; 
    	}
    	cnt=0 ;
    }

    for (int i=1023; i>=0; i--) {

    	if (freq[i] != 0) {
    		cout <<i<<" ";
    		break; 
    	}
    }
    for (int i=0; i<=1023; i++) {
    	if (freq[i] != 0) {
    		cout << i<<endl ;
    		break; 
    	}
    }
}