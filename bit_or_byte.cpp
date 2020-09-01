#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n , ct=0;
	    cin>>n;
	    n = n-1;
	    ll b = 1 , ni = 0 , by = 0;
	    while( ct<n ){
	      ct+=2;
	      if( ct  > n ) break;
	      ni += b;
	      b = 0;
	      ct+=8;
	      if( ct  > n ) break;
	      by += ni;
	      ni = 0;
	      ct+=16;
	      if( ct  > n) break;
	      b = 2*by;
	      by = 0;
	    }
	    cout<<b<<" "<<ni<<" "<<by<<"\n";
	}
	return 0;
}

