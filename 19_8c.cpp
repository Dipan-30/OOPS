#include<bits/stdc++.h>
using namespace std;

class MyException{
    public:
    MyException(){
        cout<<"const called"<<endl;
    }
    void dispaly(){
        cout<<"within display"<<endl;
    }
};
int main() {
int a=10, b=0;
try{
    if(b==0) throw MyException();
    int c=a/b;
    cout<<"quotient = "<<c<<endl;
}
catch(MyException ob){
    cout<<"caught: ";
    ob.dispaly();
}
}