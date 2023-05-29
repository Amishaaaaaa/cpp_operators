//Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
#include<iostream>
using namespace std;

int main(){
    double a,b;
    cin>>a;
    cin>>b;
    int sum=a+b;
    int diff=a-b;
    int prod=a*b;
    float div=a/b;
    cout<<"sum: "<<sum<<endl;
    cout<<"difference: "<<diff<<endl;
    cout<<"product: "<<prod<<endl;
    cout<<"division: "<<div<<endl;
    return 0;
}