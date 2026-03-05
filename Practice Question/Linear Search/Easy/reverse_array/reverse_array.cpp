#include <iostream>
using namespace std;

void ReverseArr(int arr[],int n){
    int start=0;
    int end=n-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void PrintArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int arr[10]={44,55,88,66,2,4,84,5,558,78};
    ReverseArr(arr,10);
    PrintArray(arr,10);



    return 0;
}