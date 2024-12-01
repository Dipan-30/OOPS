#include<bits/stdc++.h>
using namespace std;
namespace ns1{
    int a;
    void dispaly(){
        cout<<"NS1 disp: \n";
    }
    namespace ns2{
    int a;
    void dispaly(){
        cout<<"NS1::NS2::disp: \n";
    }        
    }
}

int main() {
// using namespace ns1;
// a=10;
// dispaly();
// ns2::a=20;
// ns2::dispaly(); 
//or
ns1::a=11;
ns1::dispaly();
ns1::ns2::a=22;
ns1::ns2::dispaly();
}