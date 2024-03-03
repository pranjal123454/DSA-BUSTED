// *
// **
// ***
// ****
#include <iostream>
using namespace std;
int main(){
    int noofrows;
    cin >>noofrows;
    for (int  i = 1; i <= noofrows; i++)
    {
        for (int j =1; j <=i; j++)
        {
            cout<<"*";
            // cout<<j;
        }
        cout<<endl;
        
        
    }
    
  return 0;
}