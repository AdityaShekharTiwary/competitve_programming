#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int diff=(a-b);
    if((a-b)%10==9) diff-=1;
	else diff+=1;
	cout<<diff;
    return 0;
}
