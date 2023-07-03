#include <iostream>
#include <cmath>
#include<string>
#include<cstring>
using namespace std;
int main(){
    int counter=1;
    int x,n,a;
    string equation = "1 ";
    double sum, fact,result;
    cout << "please enter the value x & n: ";
    cin >> x;
    cin>>n;
    cout << endl;
    for (sum=1,a = 1,fact=1;a <= n;a++){
        fact = a * fact;
        result= ((pow(x, a)) / fact);  //1 + x + x2/2! + x3/3! + ... + xn/n!
        sum+=result;
        equation.append("+ ");
        equation.append(to_string(x));
        equation.append("^");
        equation.append(to_string(a));
        equation.append("/");
        equation.append(to_string(a));
        equation.append("! ");
    }

    cout << "Equation = " << equation << endl;
    cout <<"SUM :" <<sum<<endl;
    cout <<"EXP :" <<exp(x) << endl;
    cout << endl;
    cout << "Do you want to calculate this again?";

}