#include<iostream>
using namespace std;

int printFactorial(int n) {
    if(n==1) {
        return 1;
    }
    return n*printFactorial(n-1);
}

int main() {
    int n;
    cin>>n;

   cout<<printFactorial(n);
}