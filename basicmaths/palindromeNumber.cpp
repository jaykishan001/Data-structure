#include<iostream>
using namespace std;

bool palindrome (int n) {
    int ans = 0;
    int temp = n;
    int lastdigit;
    while(n > 0) {
        lastdigit = n%10;
        ans = ans*10 + lastdigit;
        n = n/10;
    }
    if(ans == temp) {
       return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n;
    cin>>n;

    if(palindrome(n)){
        cout<<"true";
    }
    else{
        cout<<"false"
;    }
}