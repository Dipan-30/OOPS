#include<iostream>
using namespace std;

class Array{
    char *arr;
    char ch;
    int size;
    public:
    Array(int n){
        ch='A';
        size=n;
        for(int i=0;i<size;i++){
            arr[i]=ch++;
        }
    }
    char& operator[](const int index){
        return arr[index];
    }
    void dispaly(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }        
    }
};
void* operator new(size_t sz, char che){
    char *p;
    p=new char[sz];
    if(p){
        *p=che;
    }
}
int main(){
    Array a(15);
    a[4]='c';   //a.operator[](4)='c'
    a.dispaly();
    char *ptr = new ('$') char;
}