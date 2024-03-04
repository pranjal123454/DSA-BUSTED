#include <iostream>
using namespace std;
int main (){
    
    int n,sum=0,product=1,subtract=0,lastno;
    cout<<"enter the digit ";
    cin>>n;
    
    while(n>1){
        lastno=n%10;
        sum+=lastno;
        product*=lastno;
        n=n/10;
    }
    
    subtract=product-sum;
    cout <<product<<endl;
    cout <<sum<<endl;
    
    cout <<subtract;
       
        
    
    
   
    return 0;
    
   }
    
    
