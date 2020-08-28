#include<bits/stdc++.h>

using namespace std;

int main()

{

int t; //t=no. of test cases

cin>>t;

while(t--)

{

int n,g,p,f=0,s=0;

cin>>g>>p;

cin>>n;

for(int i=0;i<n;i++)

{

int l,m;

cin>>l>>m;

if(l==1)

f++;

if(m==1)

s++;

}

int price1=0,price2=0;

price1=f*g+s*p;

price2=f*p+s*g;

if(price1<price2)

{

cout<<price1<<endl;

}

else

{

cout<<price2<<endl;

}

}

}
