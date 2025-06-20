//
// Created by Jaspe on 25-6-20.
//
#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double money, years, sum, rate;
    cout<<"Please enter the deposit, years, and rate:  ";
    cin>>money>>years>>rate;
    while(money>=0 && years>0) {
        sum = money*pow((1+rate),years);
        cout<<sum<<endl;
        cout<<"Please enter the deposit, years, and rate:  ";
        cin>>money>>years>>rate;
    }
    return 0;
}