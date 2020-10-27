#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int b,a=0,i;
    //b is no. of input
    
    cin>> b;
    
    
    for(i=0;i<b;i++){
   
    cin >> a;
    
    if(a%12==0){
        cout<< a-11 <<" " <<"WS\n";}
    
    else if(a%12==1){
        cout<< a+11 <<" " <<"WS\n";}
    
    else if(a%12==2){
        cout<< a+9 <<" " <<"MS\n";}
        
    else if(a%12==3){
        cout << a+7 <<" " <<"AS\n";}
        
    else if(a%12==4){
        cout<< a+5 << " " <<"AS\n";}
        
    else if(a%12==5){
        cout<< a+3 << " "<<"MS\n";}
    
    else if(a%12==6){
        cout<< a+1 << " "<<"WS\n";}
    
    else if(a%12==7){
        cout<< a-1 << " "<<"WS\n";}
    
    else if(a%12==8){
        cout<< a-3 << " "<<"MS\n";}
    
    else if(a%12==9){
        cout<< a-5 << " "<<"AS\n";}
    
    else if(a%12==10){
        cout<< a-7 << " "<<"AS\n";}
    
    else if(a%12==11){
        cout<< a-9 << " "<<"MS\n";}
    
}
}