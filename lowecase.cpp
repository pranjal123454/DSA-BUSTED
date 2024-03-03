#include <iostream>
using namespace std;
int main(){
    char ch;
    cout <<"Enter the Charcher ato z ,A to Z or 0 to 9" <<endl;
    cin>>ch ;
    if (ch>= 95 &&ch <=127){
        cout<<"Lower case";
    }
    else if (ch>=65  && ch <=94){
        cout<<"the ch is in Upper Case";
    }
    else{
        cout<<"The out is between 0 to 9 ";
    } 


    return 0;
}