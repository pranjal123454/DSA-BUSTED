#include <iostream>
using namespace std;
#include <climits>
#include <cmath>
int main (){
    
    int n,hundernotes=0,fiftynotes=0,twentynotes=0,onenotes=0,totalamount=0;
    cout<<"enter the amount"<<endl;
    cin>>n;
    totalamount=n;
    while(totalamount>=1){
        if (n/100 >1){
            hundernotes=n/100;
            totalamount=totalamount-(totalamount*hundernotes);
        }
        else if (n/50>1){
           fiftynotes=n/100;
            totalamount=totalamount-(totalamount*fiftynotes);
            
        }
        else if (n/20>1){
           twentynotes=totalamount/100;
            totalamount=totalamount-(totalamount*twentynotes);
            
        }
        else if (n/1>=1){
           onenotes=totalamount/100;
            totalamount=totalamount-(totalamount*onenotes);
            
        }
    }
    cout<<"For "<<n<<"ruppes . "<<hundernotes<<"notes of hundered  " <<fiftynotes<<"of fifties  ,"<<twentynotes<<"of twenty ruppess and   "<<onenotes<<"one rupee note"<<endl;
    
      
    
   
    return 0;
    
   }
    
    
