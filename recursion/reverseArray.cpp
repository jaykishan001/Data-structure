#include<bits/stdc++.h>
#include<iostream>
using namespace std;


//using single pointer 
// void ReverseArray(int i, int* arr, int n) {

//     if(i >= n/2) {
//         return ;
//     };
//     swap(arr[i], arr[n-i-1]);
//     ReverseArray(i=i+1, arr, n);

// }

// using double pointer first of starting index last for ending index

void ReverseArray(int i,  int l, int* arr) {
    if(i>=l) {
        return ;
    }
    swap(arr[i], arr[l]);
    ReverseArray(i+1, l-1, arr);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n; i++) {
        cin>>arr[i];
    }

    ReverseArray(0, n-1, arr);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}