#include <iostream>
using namespace std;


int main(){
    int arr[5];
    int sum = 0;
    
    cout<<"Enter the number: "<<endl;
    //Taking input
    for (int  i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    //Printing array
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    //sum of elements in array
     for (int i = 0; i < 5; i++)
     {
       sum=sum+arr[i];
     }
     cout<<"sum of the array is : "<<sum;
     
    
    


    return 0;
}