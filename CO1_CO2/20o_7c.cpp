#include<bits/stdc++.h>
using namespace std;
template<class T>
T max(T arr[],int n){
    T max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}
int main() {
int a[] = {5,2,3,1,0};
cout<<max(a, 5)<<endl; 
float b[] = {5.2,2.3,3.2,1.7,9.1};
cout<<max(b, 5)<<endl;
}