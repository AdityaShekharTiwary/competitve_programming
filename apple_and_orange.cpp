#include<iostream
#include<cstdio>
using namespace std;
int main(){
    int s,t,a,b,m,n,countm=0,countn=0,temp;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    while(m--){
        scanf("%d",&temp);
        if(temp>=s-a && temp<=t-a)countm++;
    }
    while(n--){
        scanf("%d",&temp);
        if(temp>=s-b && temp<=t-b)countn++;
    }
    printf("%d\n%d",countm,countn);
    return 0;
    
}
