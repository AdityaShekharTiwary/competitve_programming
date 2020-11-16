#include<iostream>
using namespace std;
int main()
{
    int x1,v1,x2,v2,pos1=x1,pos2=x2;
    cin >> x1 >> v1 >> x2 >> v2;
    if((x1 - x2) % (v2 - v1) == 0)
        cout << "YES" << endl;
    else
        
        cout<< "NO" << endl;
    return 0;
}
