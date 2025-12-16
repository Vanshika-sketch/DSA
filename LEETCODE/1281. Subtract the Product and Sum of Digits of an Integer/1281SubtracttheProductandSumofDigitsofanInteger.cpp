#include <iostream>
using namespace std;

int subtractProductAndSum(int n){
     int result;
        int product = 1;
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            product = product * digit;
            sum = sum + digit;
            n = n / 10;
        }
        result = product - sum;
        return result;
    }



int main(){
    int final = subtractProductAndSum(234);
    cout<<final;


   

    return 0;
}