#include <iostream>
using namespace std;
#include <climits>
#include <cmath>
int main (){
    
    int n,rem,ans=0;
    cout <<"Enter the dgit which you want to to find it is in power of 2";
    cin>>n;
    for (int i=0;i<30;i++){
        if (pow(2,i)==n){
          cout<<"Yes";
      }
        
    }
      
      
    
   
    return 0;
    
   }
    
    
