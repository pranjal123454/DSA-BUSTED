/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int sumofdigit(int arr[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    cout<<"This is program to find sum of all elements of array"<<endl;
    int n,findsum;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findsum=sumofdigit(arr,n);
    cout<<"the sum of all digits of array is "<<findsum<<endl;
    

    return 0;
}
