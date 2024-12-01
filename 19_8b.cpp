#include<bits/stdc++.h>
using namespace std;

template<class T, int N=5>  //default template
void fun(T x){
for(int i=0;i<N;i++){
    cout<<x<<" ";
}
}
int main() {
fun<int, 3>(4);
fun<char, 4>('A');
}