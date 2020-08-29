#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b,c,d;
        cin>>a>>b>>c>>d;

        lli s=abs(a-b);
        lli y=abs(c-d);

        if(s==0||(y==0&&s==0))
        {
            cout<<"YES\n";
            continue;
        }

        if(s!=0&&y==0)
        {
            cout<<"NO\n";
             continue;
        }
        if(s%y==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}
