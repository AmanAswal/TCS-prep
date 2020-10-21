#include<iostream>
using namespace std;

void fibonacci(int n){
    int a=0, b=1;
    int c=0;

    while(c < 100){
        cout<<c<<" ";
        a = b;
        b = c;
        c = a+b;
    }
}

int main()
{
    int n=100;

    fibonacci(n);
    
    return 0;
}
