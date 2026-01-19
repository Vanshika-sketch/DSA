#include <iostream>
using namespace std;
void sum_of_natural_numbers(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    cout<<sum;
}
 


int main(){
    sum_of_natural_numbers(5);


    return 0;
}