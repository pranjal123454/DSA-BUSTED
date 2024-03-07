#include <iostream>
using namespace std;
#include <climits>
#include <cmath>
int main (){
    
    int a,b,ans=0;
    char op;
    cout<<"Welcome to the mini calculator"<<endl;
    cout<<"Enter the value of a,b "<<endl;
    cin>>a>>b;
    cout<<"Enter the operator which you want to perform  "<<endl;
    cin>>op;
    
    switch(op){
        case '*': ans=a*b;
                  break;
        case '+': ans=a+b;
                  break;
        case '-': ans=a-b;
                  break;
        case '/': ans=a/b;
                  break; 
        default :cout<<"No operator provided"<<endl;          
    }
      
      cout<<"the answer is of your calcuatiob is = "<<ans<<endl;
      
    
   
    return 0;
    
   }
    
    
