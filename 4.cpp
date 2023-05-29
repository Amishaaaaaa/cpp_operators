//Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    
    int first=num/10000;
    int sec_last=(num/10)%10;
    int sum=first+sec_last;
    cout<<"sum of the 1st and the 2nd last digit is: "<<sum<<endl;
    return 0;
}