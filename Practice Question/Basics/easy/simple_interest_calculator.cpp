#include <iostream>
using namespace std;

int main(){
    int p,r,t;
    cout<<"Enter a Principal Amount : ";
    cin>>p;

    cout<<"Enter a Rate of Interest: ";
    cin>>r;

    cout<<"Enter a Time in Years: ";
    cin>>t;

    float SI =  (p*r*t)/100;
    cout<<"SI is : "<<SI;

    return 0 ;
}