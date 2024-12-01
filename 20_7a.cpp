#include<iostream>
using namespace std;

template<class T>
T cube(T x){
    return x*x*x;
}
template<>
string cube(string y){
    return y+y+y;
}
int main() {
cout<<cube(3)<<endl;
cout<<cube<string>("JU")<<endl;  //mention string here 
}