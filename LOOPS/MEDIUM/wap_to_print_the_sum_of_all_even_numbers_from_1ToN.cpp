#include <iostream>
using namespace std;

int main(){
    int n, sum=0 ;
    cout<<"Enter a num: ";
    cin>>n;

    for (int i = 0; i <=n ; i++)
    {
        if (n%2==0)
        {
            sum=sum+i;
        }
    }

    cout<<"sum of even numbers = "<<sum;
    
    return 0;


}