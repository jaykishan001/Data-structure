#include<bits/stdc++.h>
using namespace std;

bool armstrongNumber(int n) {
    int lastDigit;
    int ans = 0;
    int duplicate = n;

    while(n > 0) {
        lastDigit = n%10;
        ans = ans + pow(lastDigit,3);
        n = n/10;
    }
    
    if(ans == duplicate){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    int n;
    cin>>n;

    if(armstrongNumber(n)){
        cout<<"true";
    }
    else {
        cout<<"false";
    };
}