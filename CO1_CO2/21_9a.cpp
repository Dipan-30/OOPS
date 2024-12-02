// Define a function template fun() that takes an array of type T and finds all the unique elements of
// the array. For ex: if an array contains 1,2,3,4,2,1,3,5,6,5,7,6,7,8. The unique elements are 4 and 8.
#include<bits/stdc++.h>
using namespace std;
template<class T>
void unique(T arr[], int n){
for(int i=0;i<n;i++){
    int flag=1;
    for(int j=i-1;j>=0;j--){
        if(arr[i]==arr[j]){
            flag=0;
             break;
        } 
    }
    for(int k=i+1;k<n;k++){
        if(arr[i]==arr[k]){
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<arr[i]<<" ";
}
}
int main() {
int a[] = {1,2,3,4,2,1,3,5,6,5,7,6,7,8};
int n = sizeof(a)/sizeof(a[0]);
unique(a, n);
}