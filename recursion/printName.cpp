#include<iostream>
using namespace std;

int myCount = 0;
void printName(string s) {
    if(myCount == 5) return ;
    cout<<s<<endl;
    myCount++;
    printName(s);
}

int main(){
    string s;
    cin>>s;

    printName(s);
}