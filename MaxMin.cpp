/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void Maxmin(int arr[],int n){
    int Max,Min;
    Max=arr[0];
    Min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>Max){
            Max=arr[i];
        }
        if(arr[i]<Min){
            Min=arr[i];
        }
    }
    cout<<"Max is "<<Max;
    cout<<"Min is "<<Min;
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Maxmin(arr,n);
   

    return 0;
}
