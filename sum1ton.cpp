#include <iostream>
using namespace std;
int main (){
    int n,sum=0;
    cout <<"enter the value of n for you want to sum from 1 to n";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout <<"The sum  from 1 to n"<<sum<<endl;
    return 0;
    
   }
    
    
