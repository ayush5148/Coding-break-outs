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
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		int b[3];
		cin>>p;

		string s;
		cin>>s;
		n=s.size();
		int o;
		bool flag=true;
        for(int i=0;i<n;i++)
        {
        	if((int(s[i])-48)%2&&flag)
        	{
        		b[0]=int(s[i])-48;
        		flag=false;
        		continue;
        	}
        	if((int(s[i])-48)%2&&!flag)
        	{
                b[1]=int(s[i])-48;
                break;
        	}
        	if(i==n-1)
        	{
        		cout<<"-1"<<endl;
        	}
        	o=i;
        }
        if(o!=n-1)	
        cout<<b[0]*10+b[1]<<endl;
    }
}



