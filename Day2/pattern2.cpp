// pattern 2 
// *
// **
// ***
// ****
// *****
#include<iostream>
using namespace std;
void printpattern2(int n){
   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<'*';
    }
    cout<<endl;
   }
    }

int main(){
    int n;
    cout<<"Enter a value for n : ";
    cin>>n;
    printpattern2(n);
}