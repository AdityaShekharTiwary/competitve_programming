#include<bits/stdc++.h>

using namespace std;

int main()

{

    string s;

    int t,count=0;

    cin>>t;

    while(t--)

    {

        cin>>s;

        for(int i=0;i<s.length();i++)

        {

            if(s[i]-'0'==0)

     count+=6;

            else if(s[i]-'0'==1)

            count+=2;

            else if(s[i]-'0'==2)

            count+=5;

            else if(s[i]-'0'==3)

            count+=5;

            else if(s[i]-'0'==4)

            count+=4;

            else if(s[i]-'0'==5)

            count+=5;

            else if(s[i]-'0'==6)

            count+=6;

            else if(s[i]-'0'==7)

            count+=3;

            else if(s[i]-'0'==8)

            count+=7;

            else if(s[i]-'0'==9)

            count+=6;

            else

            cout<<"";

        }

if(count%2==0)

        {

            for(int j=0;j<count/2;j++)

            cout<<"1";

            count=0;

        }

        else{

            cout<<"7";

            for(int p=1;p<(count-1)/2;p++)

            cout<<"1";

            count=0;

        }

        cout<<endl;

    }

}




