#include<bits/stdc++.h>
#include <iostream>
#include <list>
using namespace std;

void printDivision(int n) {
    list<int> ls;
    for(int i=1; i*i<=n; i++) {
        if(n%i==0) {
            ls.push_back(i);
          if(n/i != i){
            ls.push_back(n/i);
           }
        }
    }

    ls.sort();
    for(auto it: ls) {
        cout<<it<<" ";
    }
    

}

int main() {
    int n;
    cin>>n;

    printDivision(n);
}