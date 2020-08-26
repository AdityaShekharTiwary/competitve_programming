#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,h,y1,y2,l;
	    cin>>n>>h>>y1>>y2>>l;
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(l==0){
	            int x,y;
	            cin>>x>>y;
	            continue;
	        }
	        int x,y;
	        cin>>x>>y;
	        if(x==1){
	            if((h-y1)<=y)count++;
	            else{
	                l--;
	                if(l!=0)count++;

	            }
	        }else{
	            if(y2>=y)count++;
	            else {
	                l--;
	               if(l!=0) count++;
	            }
	        }
	    }

	    cout<<count<<endl;

	}
	return 0;
}

