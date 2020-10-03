#include<iostream>
using namespace std;
int main()
{

    int m,n,a,res=0;
    cin>>m>>n>>a;
    if(n%a==0 && m%a==0)
    {
        res=n/a+m/a;
    }
    else
    {
        res=n/a+m/a+2;
    }
    cout<<res<<endl;
    return 0;
}
