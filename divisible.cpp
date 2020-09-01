#include<iostream>
using namespace std;
int main()
{
    long long int arr[1000000],n,sum=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i =0;i<n/2;i++)
    {
        while(arr[i]>=10)
        {
            arr[i]=arr[i]/10;
        }
        if(i%2==0)
        {
            sum+=arr[i];
        }
        else
        {
            sum+=(arr[i]*-1);
        }
    }
    for(int i =n/2;i<n;i++)
    {
        arr[i]=arr[i]%10;
        if(i%2==0)
        {
            sum+=arr[i];
        }
        else
        {
            sum+=(arr[i]*-1);
        }
    }
        if(sum==0 || sum%11==0)
        {
            cout<<"OUI";
        }

        else
            {
            cout<<"NON";
        }
    return 0;
}
