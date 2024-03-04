#include <iostream>
using namespace std;
#include<climits>
int main (){
    
    int n,rem,ans=0;
    cout <<"Enter the dgit which you want to reverse";
    cin>>n;
    while(n>1){
        rem=n%10;
        ans=ans*10 +rem;
        n=n/10;
    }
    cout<<"reverse of this digit is "<<ans<<endl;
    
    
    
   
    return 0;
    
   }
    
    
