#include <iostream>
using namespace std;
bool isSameAfterReversals(int num){
    int original = num;
    int reversed1 = 0 ;
    int reversed2= 0;

    while(num!= 0){
        int digit = num%10;
        reversed1 = reversed1 *10 + digit;
        num = num/10;
    }
    // reversing a reversed num

    while(reversed1!=0){
        int digit2 = reversed1%10;
        reversed2 = reversed2 * 10 + digit2;
        reversed1 = reversed1/10;
    }
    if(reversed2 == original){
        return true;
    }else{
        return false;
    }
}



int main(){
   int result = isSameAfterReversals(452);
   cout<<result;
    return 0;
}