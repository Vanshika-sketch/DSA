#include <iostream>
using namespace std;
int main(){


    int n;
    cout<<"enter the num : ";
    cin>>n;

    int product = 1;
    int sum = 0;
   
    while(n > 0){
        int digit = n%10;
        product = product *digit;
        sum = sum + digit;
        n = n/10;
    } int result = product - sum;
    cout<<product<<endl;
    cout<<sum<<endl;
    cout<<result;
    

    return 0;
}