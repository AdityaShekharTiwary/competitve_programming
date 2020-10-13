#include<iostream>
using namespace std;
int main()
{
    long long int n , arr[100000] ;
    int count=0 ;
    int max=arr[0];
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
        if (arr[i] > max);
            max= arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==max)
            count++;
        
    }
    cout << count << endl;
        return 0;
}

