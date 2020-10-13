#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int weight=0;
    for(int i=0;i<s.size();i++)
    {
        weight+=s[i]-96;
    }
    cout << weight << endl;
    return 0;
    
}
