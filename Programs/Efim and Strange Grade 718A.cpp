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
    int n,t,dec; 
    string str; 
    cin>>n>>t>>str;

    for (int i=0; i<str.length(); i++) {
    	if (str[i] == '.') {
    		dec= i;
    		break; 
    	}
    }

    int r =-1; 

    int lastIndex= str.length(); 

    for(int i=dec+1 ; i<str.length(); i++) {

    	if (str[i] >= '5') {
    			r=i, lastIndex= i;
    		break; 
    	}
    }
    r--; 

    while (r >= dec+1 && t>0) {

    	if (str[r+1] >= '5') {
    		if (r >= dec+1)
    			str[r+1]='0',str[r]++, t--,lastIndex= r+1, r--;
    	}
    	else
    		break; 
    }

    int carry= (t >0); 

    if (carry ==1 && str[dec+1] >= '5') {

    	for (int i=dec-1 ;i>= 0; i--) {
    		if (str[i] != '9') {
    			str[i]++;
    			carry = 0; 
    			break;
    		}
    		else {
    			carry = 1; 
    			str[i] = '0'; 
    		}
    	}

    	if (carry)
    		cout <<"1";
    	for (int i=0; i<dec; i++)
    		cout << str[i];
    	return 0;
    }


    for (int i=0; i<lastIndex; i++) {
    	cout <<str[i];
    }

}