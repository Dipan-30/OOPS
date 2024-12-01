#include<bits/stdc++.h>
using namespace std;
template<class X, class Y=int>
class A{
X m;
Y n;
public:
A(X m, Y n){
    this->m=m;
    this->n=n;
}
A(X m){
    this->m=m;
    this->n=0;
}
void dispaly(){
    cout<<m<<" "<<n<<endl;
}
};
int main() {
A <int, char>ob1(4, 'A');
ob1.dispaly();
}