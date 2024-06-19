// /******************************************************************************

//                               Online C++ Compiler.
//               Code, Compile, Run and Debug C++ program online.
// Write your code in this editor and press "Run" button to compile and execute it.

// *******************************************************************************/

// #include <iostream>
// using namespace std;



// int main()
// {
//     int n,count=0;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
        
//     }
//     int highest=arr[n-1];
//     int low=0;
//     int high=n-1;
//     int mid=(high +1)/2;
//     while(mid<=high){
//         if(arr[mid]==highest){
//             count++;
//             mid++;
//         }
//         if (arr[mid] < highest){
//             mid++;
//         }
        
//     }
   
   
   
//   cout<<"count is"<<count;
    
    
    

//     return 0;
// }



/******************************************************************************

                              Online C++ Compiler.
              Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;



int main()
{
    int n,count=0;
    cin>>n;
    int low=0;
    int high=n-1;
    int mid=(high +1)/2;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int highest=arr[n-1];
    
    while(mid<=high){
        if(arr[mid]==highest &&arr[mid]>arr[mid-1]){
            count=(high-mid)+1;
            break;
        }
        else if(arr[mid]<highest){
            mid++;
            
        }
        
    }
    
   
   
  cout<<"count is"<<count;
    
    
    

    return 0;
}
