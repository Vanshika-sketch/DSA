#include<iostream>
using namespace std;

int main(){
    int n,original;
    cout<<"Enter a number: ";
    cin>>n;

    original=n;
    int sum=0;

    while(n>0){
        int digit =n%10;
        sum=sum+digit*digit*digit;
        n=n/10;


    }
    if(sum==original){
        cout<<"Armstrong number";
    }else{
        cout<<"Not an Armstrong number";
    }


    return 0;
}