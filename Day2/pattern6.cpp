// pattern 6
// 12345
// 1234
// 123
// 12
// 1
#include<iostream>
using namespace std;
void printpattern6(int n){
   for(int i=1;i<n;i++){
    for(int j=1;j<n-i+1;j++){
       cout<<j<<" ";
    }
    cout<<endl;
   }
}
int main(){
    int n;
    cout<<"Enter a value for n: ";
    cin>>n;
    printpattern6(n);
}