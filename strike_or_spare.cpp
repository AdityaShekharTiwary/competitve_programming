#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n>1){
			string q ="1";
			q.append(n/2,'0');
			cout<<1<< " "<<q<<"\n";
		}
		else
			cout<<1<<" "<<1<<"\n";
	}
	return 0;
}

