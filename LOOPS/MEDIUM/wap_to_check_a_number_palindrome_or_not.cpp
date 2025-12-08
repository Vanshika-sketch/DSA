#include<iostream>
using namespace std;

int main(){
    int n,original,rev=0;
    cout<<"Enter a number: ";
    cin>>n;

    original = n;

    while(n!=0){
        int digit = n%10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if(rev == original){
        cout<<"Number is Palindrome";
    }else{
        cout<<"Number is not Palindrome";
    }

    return 0;
}