//Q5 - Write a program to calculate the sum of digits of a 3 digit number.
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int first=num/100;
    int sec=(num/10)%10;
    int third=(num%10);
    int sum=first+sec+third;
    cout<<"sum of digits is: "<<sum<<endl;
    return 0;
}