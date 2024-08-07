#include<bits/stdc++.h>
#include<iostream>

// void printSum(int sum, int n ){
//     if(n<1) {
//         std::cout<<sum;
//         return;
//     }
//     sum = sum+n;
//     printSum(sum, n-1);
    
// }

//function recursion when function return somthing


int printSum(int n) {
    if(n==0) {
        return 0;
    }
    return n+ printSum(n-1);
}

using namespace std;
int main() {
    int n;
    cin>>n;
    // printSum(0, n);
   cout<<printSum(n);
}