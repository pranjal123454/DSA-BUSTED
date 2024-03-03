#include <iostream>
using namespace std;
int main (){
    int n,i=1;
    cout <<"enter the number till you want all even no"<<endl;
    cin>>n;
    while(i<=n){
        if (i%2==0)
        {
            cout <<i << endl;
        }
        i=i+1;
   }
    
    return 0;
}