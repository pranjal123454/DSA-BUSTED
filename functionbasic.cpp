#include <iostream>
using namespace std;
#include <climits>
#include <cmath>
int power(int a,int b){
    int ans;
    ans=pow(a,b);
    return ans;
}
int main (){
    
    int a,b,result;
    cout<<"Enter the value for you want to find power"<<endl;
    cin>>a;
    cout<<"Enter the value of power"<<endl;
    cin>>b;
    result=power(a,b);
    cout<<"answer is "<<result;
    

    
     
   
    return 0;
    
   }
    
    
