#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number = 3; //variable
    double cubicRoot; // declared as double 0.00

    cubicRoot = pow((double)(number), 1.0/3);     // used Pow 

    cout<<fixed<<setprecision(10)<<cubicRoot<<"\n";
    return 0;
}
