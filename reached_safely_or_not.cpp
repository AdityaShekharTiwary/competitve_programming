#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int m,n,Rx,Ry,a,count=1;
        int x=0,y=0;
        char R , L ,U , D;
        string s;
        cin >> m >> n >> Rx >> Ry >> a >> s;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]== 'R')
                x++;
            if(s[i]== 'L')
                x--;
            if(s[i]== 'U')
                y++;
            if(s[i]== 'D')
                y--;
        }

        if ((x < 0 || y < 0) || (x > m || y > n ))
        {
            cout << "case " << count << ": " << "DANGER" << endl;
            count++;
        }
        else if (x == Rx && y == Ry)
        {
            cout << "case " << count << ": " << "REACHED" << endl;
            count++;
        }
        else
        {
            cout << "case " << count << ": " << "SOMEWHERE" << endl;
            count++;
        }
    }
    return 0;
}
