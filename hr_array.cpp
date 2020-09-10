#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , arr[1000];
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
    }
    for(int i=n;i>=1;i--)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}
