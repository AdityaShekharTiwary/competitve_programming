//     https://www.codechef.com/problems/CARVANS

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,val=0;
        cin>>n;
        int *arr=new int(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<arr[i+1])
                val++;
        }
        cout << n-val << endl;


    }
    return 0;
}

