#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
    while(a % b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }
    return b;
}

int main()
{
    int a = 24, b = 60;

    cout<<gcd(a,b);
    
    return 0;
}
