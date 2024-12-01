#include<bits/stdc++.h>
using namespace std;
class Sample{
    int a;
    public:
    Sample(int x=0){
        a=x;
    }
    Sample operator++(){
        Sample temp;
        temp.a=++a;
        return temp;
    }
    Sample operator+(Sample &ob){ //use & to pass int as obj
        Sample temp;
        temp.a=a+ob.a;
        return temp;
    }
    operator int(){  //user defined datatype to basic datatype
        return a;
    }
    void display(){ 
        cout<<"a="<<a<<endl;
    }
};
int main() {
Sample s1(5),s2,s3(10);
s2=s1+(++s3);
s2=s3+3;  //make int to obj
int t=s2;
cout<<"t="<<t<<endl;
//dispaly method
s1.display();
s2.display();
s3.display();
}