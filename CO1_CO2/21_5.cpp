#include<bits/stdc++.h>
using namespace std;
template<class T>
T square(T x){
    return x*x;
}
template<>
char square(char ch){
    if(ch>='a' && ch<='z'){
        return ch-32;
    }
    else return ch;
}
int main() {
cout<<square(2)<<endl;
cout<<square('b')<<endl;
cout<<(int)square('A')<<endl;
}