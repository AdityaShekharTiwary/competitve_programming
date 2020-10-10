#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=1;
        int i=2;
        cin >> n;
        if(n==1)
            cout<<"NO"<<endl;
        else{
        while(i<sqrt(n))
        {
           if(n%i==0)
           {
               sum=sum+i+n/i;
           }
           i++;
        }
        }

        if(sum==n)
            cout << "YES" <<endl;
        else
            cout << "NO" << endl;
    }


return 0;
}
