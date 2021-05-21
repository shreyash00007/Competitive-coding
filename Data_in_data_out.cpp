#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("data.in"); /// Its is the data in(input file) file 
ofstream g("data.output"); /// Its is the data out(Output file) file

int main()
{
    int a, b, sum;
     f>>a>>b;
     sum = a + b;
     g<<sum;
    return 0;
}
