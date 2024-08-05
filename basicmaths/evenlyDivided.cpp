#include<iostream>
using namespace std;

int evenlyDivided(int n) {
    int digit;
    int temp = n;
    int count =0;
    while(n > 0) {
       digit = n%10;
       if(temp%digit==0) {
        count++;
       }
       n= n/10;
    }
    return count;
}


int main() {
    int n;
    cin>>n;
    int ans =  evenlyDivided(n);
    cout<<ans;

}