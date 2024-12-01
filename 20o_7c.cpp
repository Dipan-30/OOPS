#include<bits/stdc++.h>
using namespace std;
template<class T>
T max(T arr[], int n){
    T max = arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }    
    }
    return max;
}
int main() {
int arr[]={1,2,3,4,5};    
cout<<max(arr, 5);
}