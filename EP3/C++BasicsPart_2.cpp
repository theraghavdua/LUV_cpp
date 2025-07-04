#include<bits/stdc++.h>
using namespace std;
int main(){
    //caculation are done in higher datatype
//Double >> Float >> Long Long Int >> Long Int >> Int >> Characters 

// operator precedence ..read about it online

// rough ranges 
// -10^9 < int < 10^9
// -10^12 < long int < 10^12
// -10^18 < long long int < 10^18
 int a,b;
    a = 10;
    b = 10;
int ans = a * 1LL * b; // to convert the answer into long long integer  


double k =100000;
double l =100000;
double n = k*l;
// double prints in scientific notation to print in normal form we use fixed 
//setprecision to avoid decimals or specify number of decimals in double or float
cout<< fixed << setprecision(0) <<n <<endl;

}