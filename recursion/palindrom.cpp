#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool palindromCheck(int i, string s) {
    if(i>= s.length()/2) {
        return true;
    }
    if(s[i] != s[s.size()-i-1]){
        return false;
    }
    return palindromCheck(i+1, s);

}

int main() {
    string s;
    cin>>s;
    int n = s.length();
    if(palindromCheck(0, s)){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    
}