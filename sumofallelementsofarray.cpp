/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void sumofallelement(int arr[],int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        
    }
    cout<<sum;
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sumofallelement(arr,n);
    
    

    return 0;
}
