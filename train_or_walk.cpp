#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b,c,d,p,q,y;
	    cin>>n>>a>>b>>c>>d>>p>>q>>y;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    ll num1=abs(arr[a-1]-arr[b-1])*p;
	    ll num2=abs(arr[a-1]-arr[c-1])*p;
	    if(num2<=y){
	        num2=y+abs(arr[c-1]-arr[d-1])*q+abs(arr[d-1]-arr[b-1])*p;
	    }else num2=LONG_MAX;
	    cout<<min(num1,num2)<<endl;
	}
	return 0;
}
