#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int sa,sb,i,k,j;
        string s;
        cin >> s;
        cin >> sa >> sb;
        for(i=0;i<s.size();i++)
        {
            if(s[i]== 'A')
               k = i;
            else if(s[i]== 'B')
               j = i;
        }
        if((j-i)%(sa+sb)==0){
            cout<<"unsafe"<<endl;
        }
        else cout<<"safe"<<endl;

    }
    return 0;
}
