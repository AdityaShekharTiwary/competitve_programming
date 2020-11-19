#include<iostream>
using namespace std;
int main()
{
    string s;
    int l,i;
    cin >> s;
    l = s.size() - 1;
   // for (int i=0;i<=l;i++)

        if(s[i] == s[l-i])

            cout << "YES" << endl;
        else
            
            cout << "NO" << endl;
    return 0;
}
