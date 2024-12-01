#include<bits/stdc++.h>
using namespace std;
template<class T>
void fun(T arr[], int n){
int size = n;
for(int i=0;i<size-1;i++){
    int flag=0;
    for(int j=i-1;j>=0;j--){
        if(arr[i]==arr[j]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        int count=0;
        for(int k=i;k<size;k++){
            if(arr[i]==arr[k]){
                count++;
            }
        }
    if(count==1){
        cout<<arr[i]<<" ";
    }        
    }

}
}
int main() {
int arr[] = {1,2,3,4,2,1,3,5,6,5,7,6,7,8};
fun(arr, 15);
}