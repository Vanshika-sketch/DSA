#include <iostream>
using namespace std;

int main(){
    float a,b;
    char op;

    cout<<"Enter first number: ";
    cin>>a;

    cout<<"Enter second number: ";
    cin>>b;

    cout<<"Enter the operator(+,-,*,/): ";
    cin>>op;

    switch(op){
        case '+':
        cout<<"Result = "<<a+b;
        break;

        case '-':
        cout<<"Result = "<<a-b;
        break;

        case '*':
        cout<<"Result = "<<a*b;
        break;

        case '/':
        cout<<"Result = "<<a/b;
        break;

        default:
        cout<<"Invalid input";
    }
    return 0;


}
