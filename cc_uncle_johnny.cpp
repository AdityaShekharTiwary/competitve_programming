#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int T; 
	cin>>T;
	while(T--)
	{
		int n; 
		cin>>n;
		vector< int>v;
		for(int i=0;i<n;i++)
		{
		 	 int x;
		 	 cin>>x;
			 v.push_back(x); 
		 
		}
		int k; 
		cin>>k;
		int p= v[k-1];
		sort(v.begin(),v.end());
		for(int i=0; i<n;i++)
		{
			if(v[i]==p)
			{
			cout<<i+1<<endl;
			break;
			}
		}
	}
}
