#include<bits/stdc++.h>
using namespace std;
void findPair(int* arr,int n, int s){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]>=s){
                cout<<"("<<arr[i]<<", "<<arr[j]<<")"<<endl;
            }
        }
    }
}
int main() {
int n;
cout<<"Enter the number of elements in the array: ";
cin>>n;    
int* arr = new int[n];
cout<<"Enter the elements in the array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int s;
cout<<"Enter the value of target: ";
cin>>s;
findPair(arr, n, s);
}