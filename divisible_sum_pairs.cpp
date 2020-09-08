#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k ,a[100],count =0;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        cin>> a[i];
    }

      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){

               if((a[i]+a[j])%k==0){
                   count++;
               }
               }
           }
       }

    cout << count << endl;

    return 0;
}
