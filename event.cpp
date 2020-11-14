
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string day[7] = {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    char s[10],e[10];
    int t,l,r,start,end;
    cin>>t;
    while(t--)
    {
        cin>>s>>e>>l>>r;

        for(int i=0 ; i < 7 ;i++)
        {
            if(s == day[i])
            {
                start = i + 1;
            }

            if(e == day[i])
            {
                end = i + 1;
            }
        }

        int diff = end - start + 1;

        if(diff<=0)
            diff = diff+7;
                 long long cnt=0;
	    long long temp=0;

	    
	    while(diff<=r)
	    {
	        if(diff>=l)
	            cnt++;
	        if(cnt>1)
	            break;

	        temp=diff;
	        diff=diff+7;
	    }
	    if(cnt>1)
	    cout<<"many"<<endl;
	    else if(cnt==0)
	    cout<<"impossible"<<endl;
	    else
	    cout<<temp<<endl;

    }

    return 0;
}
