#include<iostream>
using namespace std;
int main()
{
    float a,b,c,si;
    cout << "Enter the principal amount: ";
    cin >> a;   
    cout << "Enter the rate of interest: ";
    cin >> b;
    cout << "Enter the time period: ";
    cin >> c;   
    si = (a*b*c)/100;
    cout << "The simple interest is: " << si << endl;
    return 0;
}