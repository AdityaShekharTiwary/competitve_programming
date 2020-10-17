#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    cin >> n;
    int sh , sm ,eh ,em;
    for(int i=0;i<n;i++)
    {
        cin >> sh >> sm >> eh >> em;

        a= sh* 60 + sm;    //converting hour in min
        b= eh* 60 + em;   //converting hour in min

        c= b-a;           // total working hour

        cout << c/60 << " " << c%60 << endl;
        

    }
    return 0;
}
