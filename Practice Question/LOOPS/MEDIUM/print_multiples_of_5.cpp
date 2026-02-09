#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    cout<<"Multiples of 5 up to "<< n <<":";

    for (int  i = 1; i <=n; i++)
    {
        if (i%5==0)
        {
            cout<<i<<" ";
        }
        
    }
    





    return 0;
}