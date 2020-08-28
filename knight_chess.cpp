#include <iostream>
using namespace std;

int main() {
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int x[n],y[n];
        int a,b,f = 0;
        for(int i = 0;i < n;i++)
            cin >> x[i] >> y[i];
        cin >> a >> b;
        for(int i = 0;i < n;i++)
        {
            if(x[i]+1 == a && y[i]+2 == b){f = 1;break;}
            if(x[i]+2 == a && y[i]+1 == b){f=1;break;}

            if(x[i]-1 == a && y[i]+2 == b){f = 1;break;}
            if(x[i]-2 == a && y[i]+1 == b){f=1;break;}

            if(x[i]-1 == a && y[i]-2 == b){f = 1;break;}
            if(x[i]-2 == a && y[i]-1 == b){f=1;break;}

            if(x[i]+1 == a && y[i]-2 == b){f = 1;break;}
            if(x[i]+2 == a && y[i]-1 == b){f=1;break;}
        }
        if(f)
        {
            int k = a,l = b;
            k++;
            if(f){
            for(int i = 0;i < n;i++)
            {
                if(x[i]+1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]-1 == l){f=1;break;}

                if(x[i]+1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]-1 == l){f = 1;break;}
            }}
            else f = 0;
            l++;
            if(f){
            for(int i = 0;i < n;i++)
            {
                if(x[i]+1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]-1 == l){f=1;break;}

                if(x[i]+1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]-1 == l){f = 1;break;}
            }}
            else f = 0;
            k = a;l=b;l++;
            if(f){
            for(int i = 0;i < n;i++)
            {
                if(x[i]+1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]-1 == l){f=1;break;}

                if(x[i]+1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]-1 == l){f = 1;break;}
            }}
            else f = 0;
            k=a;l=b;l--;
            if(f){
            for(int i = 0;i < n;i++)
            {
                if(x[i]+1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]-1 == l){f=1;break;}

                if(x[i]+1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]-1 == l){f = 1;break;}
            }}
            else f = 0;
            k = a;l = b;k--;l--;
            if(f){
            for(int i = 0;i < n;i++)
            {
                if(x[i]+1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]-1 == l){f=1;break;}

                if(x[i]+1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]-1 == l){f = 1;break;}
            }}
            else f = 0;
            k = a;l = b;k--;
            if(f){
            for(int i = 0;i < n;i++)
            {
                if(x[i]+1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]-1 == l){f=1;break;}

                if(x[i]+1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]-1 == l){f = 1;break;}
            }}
            else f = 0;
            k = a;l = b;k--;l++;
            if(f){
            for(int i = 0;i < n;i++)
            {
                if(x[i]+1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]+2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]+1 == l){f=1;break;}

                if(x[i]-1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]-2 == k && y[i]-1 == l){f=1;break;}

                if(x[i]+1 == k && y[i]-2 == l){f = 1;break;}
                if(x[i]+2 == k && y[i]-1 == l){f = 1;break;}
            }}
            else f = 0;
            if(f)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
	return 0;
}
