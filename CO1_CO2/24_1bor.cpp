#include<bits/stdc++.h>
using namespace std;
int highestElement(int* arr, int n, int idx){      
    if(idx==n) return INT_MIN;
    return max(arr[idx], highestElement(arr, n, idx+1));
}
int highestDigit(int n){
    if(n<10) return n;
    return max(n%10, highestDigit(n/10));
}
int main() {
    int* arr = new int[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    int hE= highestElement(arr, 10, 0);
    cout<<hE<<endl;
    int hD = highestDigit(hE);
    cout<<hD<<endl;
}