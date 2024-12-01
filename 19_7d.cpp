#include<bits/stdc++.h>
using namespace std;

int main() {
int arr[] = {-1, -2, 0, 3, 4};

for(int i=0;i<5;i++){
    try{
    if(arr[i]<0) throw 'A';
    else if(arr[i]==0) throw 0;
    else throw "hello";
    }

    catch(char ch){
        cout<<ch<<endl;
    }
    catch(int x){
        cout<<x<<endl;
    }   
    catch(...){
        cout<<"gen exp"<<endl;
    }     
}
}