#include <iostream>
using namespace std;
int main(){
    int third[3]={3,5,7};
    cout<<"Value at 2 index "<<third[2]<<endl;

    int n =15;
    cout<<"printing the array "<<endl;
    for(int i = 0;i<n;i++){
        cout<< third[i]<<" ";
    }  
    return 0;
} 