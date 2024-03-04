#include <iostream>
using namespace std;
int main (){
    int n,c,a=0,b=1;
    cout <<"enter the no of element you want to print for fibonacci series";
    cin>> n;
    cout <<a<<endl;
    cout <<b<<endl;
    for(int i=3;i<=n;i++){
        c=a+b;
        cout <<c<<endl;
        a=b;
        b=c;
        
    }
    
   
    return 0;
    
   }
    
    
