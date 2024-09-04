#include<iostream>
using namespace std;

int main(){

    int b1=0,b2=0,b3=0;

    cin>>b1;
    cin>>b2;

   if(b1 && b2){
    cout<<3;
   }
   else if(b2 && b3){
    cout<<1;
   }
   else{
    cout<<2;
   }
}