#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,s;
        cin>>n>>k>>s;
        if(k>n)
            cout<<-1<<endl;
        else{
        if(s<7){
            if((k*s)%n==0)
            cout<<(k*s)/n<<endl;
            else
            cout<<(k*s)/n+1<<endl;
        }else{
            if((n-k)*6<k)
            cout<<-1<<endl;
            else{
             if((k*s)%n==0)
             cout<<(k*s)/n<<endl;
            else
            cout<<(k*s)/n+1<<endl;


        }

        }

    }

    }
	return 0;
}
