
#include <iostream>
using namespace std;
void findmaxandmin(int arr[],int n){
     int max=arr[0];
     int min=arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min){
            min=arr[i];
        }
       
       
    }
    cout<<"the maximum and minimum value of the array  "<<max <<min;
    
}

int main()
{
    cout<<"This prgram for find maximum element and minimum element of array"<<endl;
    int n;
    cout<<"Enter the size of array which you want"<<endl;
    cin>>n;
    
    int arr[n];
    
    cout <<"Now enter the values of array"<<endl;
    for (int i=0;i<n;i++){
        
        cin>>arr[i];
    }
    findmaxandmin(arr,n);
    
    return 0;
}
