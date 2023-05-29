#include<iostream>
using namespace std;

int main(){
    int a,b;
    bool check1, check2,check3;
    cin>>a;
    cin>>b;
    check1=(a<50);
    check2=(a<b);
    check3=check1&&check2;
    cout<<check3<<endl;
    return 0;
}