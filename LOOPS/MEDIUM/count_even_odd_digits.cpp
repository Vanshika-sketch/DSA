#include <iostream>
using namespace std;

int main(){
    int n;
    int evenCount = 0,oddCount=0;
    cout<<"enter a number: ";
    cin>>n;

    while(n!=0){
        int digit = n%10;
        if(digit%2==0)
           evenCount++;
           else
               oddCount++;
        n=n/10;
    }
    cout<<"Event digits: "<<evenCount<<endl;
    cout<<"Odd Digits: "<<oddCount<<endl;






    return 0;
}