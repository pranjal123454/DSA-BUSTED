#include <iostream>
using namespace std;
int main (){
    int n,i=2;
    cout <<"Enter the number for you want to check wheater it is prome or not ";
    cin>>n;
    while(i<=n-1){
        if (n %i==0){
            cout <<"Not Prime "<<endl;
            break;
        }
        else{
            cout <<"Prime number" << endl;
            break;
        }
        i=i+1;

    }
    return 0;
}