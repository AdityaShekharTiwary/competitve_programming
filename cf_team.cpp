#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    int a,b,c;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a+b+c>1)
            x++;
    }
    cout<<x;

    return 0;
}
