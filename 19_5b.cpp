#include<bits/stdc++.h>
using namespace std;
namespace ns1{
    int a=10;
    void dislpaly(){
        cout<<"a = "<<a<<endl;
    }
}
namespace ns2{
    int b=20;
}
namespace ns1{
    int c=30;
}
int main() {
using namespace ns1;
dislpaly();
cout<<"c = "<<c<<endl;
using namespace ns2;
b=100;
cout<<"b = "<<b<<endl;
}