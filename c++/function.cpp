#include<math.h>
#include<iostream>
using namespace std;


// Your Code goes here

int compute (int A, int B){
return (pow(A,2)+pow(B,2));
}


int main()  {
    int A, B;
    cin>>A>>B;
    cout<<compute(A, B)<<endl;
    return 0;
}