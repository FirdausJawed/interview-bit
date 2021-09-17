#include<iostream>
#include <iomanip> 
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int a;
    long b;
    char c;
     float d;
     double e;
     cin >>a>>b>>c>>d>>e;
     cout<<a<<endl;
     cout<<b<<endl;
     cout<<c<<endl;
     cout<<fixed<<setprecision(3)<<d<<endl;
    cout<<fixed<<setprecision(9)<<e<<endl;

    return 0;
}