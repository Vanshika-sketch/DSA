#include<iostream>
using namespace std;
                                  // Function with parameters(input)
void printNumber(int n) {
    cout<< n;
}
    // n : parameter

void printHello(){
    cout<<"\nHello World";
}
int main(){

    int x = 4;
    printNumber(x ); //x is an argument,  value of x is copied into n

    printHello(); //function call


    return 0 ;
}
