#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int o=0;
        string s;
        cin>>s;
        if(s[1]=='+')
            o++;
        else if(s[1]=='-')
            0--;
        cout<<o<<endl;
    }
    return 0;
}
