#include<bits/stdc++.h>
using namespace std;
class Test{
    int t;
    public:
    Test(int t=0){
        this->t=t;
    }
    Test operator()(int x){
        Test temp;
        temp.t=t+x;
        return temp;
    }
    int get(){
        return t;
    }
};
class Sample{
    int s;
    public:
    Sample(int s=0){
        this->s=s;
    }
    // Sample(const Sample &sob){   No need of copy constructor
    //     s=sob.s;
    // }
    Sample(Test ob){
        s=ob.get();
    }
    Sample operator++(){
        Sample temp;
        temp.s=++s;
        return temp;
    }
    Sample operator+(Sample &ob){
        Sample temp;
        temp.s=s+ob.s;
        return temp;
    }
    void display(){
        cout<<"s = "<<s<<endl;
    }
    Sample* operator->(){
        return this;
    }
};
int main(){
    Sample S1(5);  //const
    Sample S2(S1); //copy const
    Test T1, T2;  //const
    T2=T1(10);    //() OL
    S1=T2;  //d=s  
    Sample S3=(++S1)+S2;  
    S3->display();  //->OL
}