#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
    // Write Your Code Here
    if(n==0) return 1;

    if(n==1) return x;

    double num=1;
    int rounded_n=abs(n);
    if(rounded_n%2==1){
        num*=x;
    }
    

    
        num *= myPow(x, rounded_n / 2);
        num *= myPow(x, rounded_n / 2);
    
        if(n<0) num=1/num;

    return num;
}

int main()
{

return 0;
}