#include<iostream>
using namespace std;
int main()
{
    int x=0,y=0;
    char L,R,U,D;
    string s;

    cin >> s;

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'L')
            x--;
        if(s[i] == 'R')
            x++;
        if(s[i] == 'U')
            y++;
        if(s[i] == 'D')
            y--;

    }

    cout << x << " " << y << endl;
    return 0;
}

