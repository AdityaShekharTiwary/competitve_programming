#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    long long int arr[200000];
    long long int n= sizeof(arr)/sizeof(arr[0]);
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    sort(arr, arr+n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
               if(arr[i] == arr[j])
               count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}
