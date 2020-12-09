#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        int arr[b],d=0;
        for(int i=0;i<b;i++){
            cin>>arr[i];
        }
	    
        for(int i=0;i<b;i++){
            if(arr[i+1]==arr[i]+1)
            {
                d++;
            continue;
            }
            if(d>=2){
                cout<<arr[i-d]<<"..."<<arr[i];
            }
            if(d<2){
                while(d>=0)
                {
                    cout<<arr[i-d];
                    if(d>0)
                    cout<<",";
                    d--;
                }
            }
            if(i!=b-1)
            cout<<",";
            d=0;
                    }
            cout<<endl;

    }
	// your code goes here
	return 0;
}
