#include<bits/stdc++.h>
using namespace std;
class Sample{
    int s;
    public:
    Sample(int s=0){
        this->s=s;
    }
    Sample operator++(int){
        return s++;
    }
    void operator*=(Sample &ob){
        s*=ob.s;
    }
    operator int(){  //UDT->BDT It will work for cout<<s4 also
        return s;
    }
    // friend ostream& operator<<(ostream &os,const Sample &ob){
    //     os<<ob.s<<" ";
    //     return os;
    // }
};
int main() {
Sample s1(10), s2(5), s3;
s3=s2++;
s1*=s2;
int x=s1;
int y=s2;
Sample s4(x+y);
cout<<s4;
}