#include <bits/stdc++.h>

using namespace std;




int a=0, b=7;




void solve()

{

int n;

cin>>n;




if(abs(n-a)>abs(n-b))

{

cout<<"B"<<endl;

b=n;

}

else

{

cout<<"A"<<endl;

a=n;

}

}




int main()

{

int t;

cin>>t;

while(t--)

{

solve();

}

return 0;

}

