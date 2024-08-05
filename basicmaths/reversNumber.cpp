#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
    int lastdigit;
    int ans =0;
    int x = n;
    
    if(n < 0) {
     n = abs(n);
    }
    while(n > 0) {
        lastdigit = n%10;
        ans = ans*10 + lastdigit;
        n=n/10;
    }
    if(x < 0){
        return -ans;
    }
    else {
        return ans;
    }
}


int main() {
    int n;
    cin>>n;

   int ans =  reverseNumber(n);
    cout<<ans;
}