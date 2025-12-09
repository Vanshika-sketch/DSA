#include <iostream>
using namespace std;

int main(){
    int n,count = 0,digit;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Enter digit to count: ";
    cin>>digit;
    
    
    while(n>0){
        int last = n%10;
        if(last==digit){
            count++;
        }
        n = n/10;
    }
    cout<<"Frequency = "<<count;









    return 0;
}