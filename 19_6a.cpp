#include<bits/stdc++.h>
using namespace std;
class Sample{
    int s;
    public:
    Sample(int s=0){
        this->s=s;
    }
    void display(){
        cout<<"s = "<<s<<endl;
    }
    Sample* operator->(){
        return this;
    }
    };
class Test{
    int t;
    public:
    Test(int t=0){  //const 1
        this->t=t;
    }
    Test(int a, int b){  //const 2
        t=a+b;
    } 
    operator Sample(){   //d=s
        return Sample(t);
    }        
    Test operator()(int a,int b,int c){
        Test temp;
        temp.t=a+b+c;
        return temp;
    }
    friend ostream& operator<<(ostream &os, Test &ob){
        os<<ob.t<<endl;
        return os;
    }
};
int main() {
Sample s1, s2(10);
Test t1 = 15;
s1=t1;
s1->display();
Test t2(20, 25), t3;
t3 = t2(15, 30, 45);
cout<<t3;
}