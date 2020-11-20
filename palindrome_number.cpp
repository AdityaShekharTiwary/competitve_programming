#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num,rnum=0;
        cin>>num;
        int val=num;
        while(num>0)
        {
            rnum=rnum*10+num%10;
            num=num/10;
        }
        if(rnum==val)
            cout<<"Wins"<<endl;
        else
            cout<<"Loses"<<endl;
    }
}

