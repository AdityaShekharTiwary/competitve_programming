#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double s,sg,dg,d,t,speed;
        cin >> s >> sg >> dg >> d >> t;

        speed = ((double)50*d*3.6)/t;
        speed=s+speed;

        if (abs(sg-speed) < (abs(dg-speed)))
            cout << "SEBI"<< endl;

        else if (abs(sg-speed) > abs((dg-speed)))
            cout << "FATHER"<< endl;

        else
            cout << "DRAW" << endl;
    }

    return 0;
}
