#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    A(){
        cout<<"const: "<<endl;
    }
    ~A(){
        cout<<"dest: "<<endl;
    }    
};
int main() {
try{
    A ob; 
    throw 0;  //first all the ob created within try block are destructed,
    //then control is handeled to the catch block 
}
catch(int x){
    cout<<"exception: "<<x<<endl;
}
}