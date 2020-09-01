#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,m,n,x1,y1,x,y,l,i,count=1;
	string res,str;
	cin>>t;
	while(t--)
	{
	    cin>>m;
	    cin>>n;
	    cin>>x;
	    cin>>y;
	    cin>>l;
	    cin>>str;

	    x1=0;
	    y1=0;

	    for(i=0;i<l;i++)
	    {
	        if(str[i]=='U')
	        y1++;
	        else if(str[i]=='D')
	        y1--;
	        else if(str[i]=='R')
	        x1++;
	        else
	        x1--;
	    }
	    if((x1<0)||(x1>m))
	    res="DANGER";
	    else if((y1<0)||(y1>n))
	    res="DANGER";
	    else if((x1==x)&&(y1==y))
	    res="REACHED";
	    else
	    res="SOMEWHERE";

	    cout<<"Case "<<count<<": "<<res<<endl;
	    count++;
	}
	return 0;
}
