/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void swapalternate(int arr[],int n){
    int temp=0;
    
    for(int i=0;i<n;i=i+2){
        if(!arr[i+1]){
            break;
        }
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        
        
    }
    for(int i=0;i<n;i++){
      cout<<arr[i];
        
    }
    
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapalternate(arr,n);
    
    

    return 0;
}
