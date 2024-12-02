#include<bits/stdc++.h>
using namespace std;
int highestDigit(int n){
    if(n<10) return n;
    return max(n%10, highestDigit(n/10));
}
bool isFibo(int n, int a = 0, int b = 1) {
    if (n == a || n == b) return true; // Base case: Found in Fibo series
    if (b > n) return false; // Base case: Exceeded the number
    return isFibo(n, b, a + b); // Recur with the next Fibo numbers
}
int main() {
int n;
cout<<"Enter the value of n: ";
cin>>n;
int hD=highestDigit(n);
cout<<hD<<endl;
cout<<isFibo(hD)<<endl;
}