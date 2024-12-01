#include<bits/stdc++.h>
using namespace std;

class Sample{
    int s;
    public:
    Sample(int s=0){
        this->s=s;
    }
    friend Sample operator++(Sample &ob, int){  //int later 
        Sample temp;
        temp.s=ob.s++;
        return temp;
    }
    friend ostream& operator<<(ostream &os, Sample &ob){
        os<<ob.s<<endl;
        return os;
    }
    friend Sample operator+(int x, Sample &ob2){
        Sample temp;
        temp.s=x+ob2.s;
        return temp;
    }          
    friend Sample operator--(Sample &ob){
        Sample temp;
        temp.s=--(ob.s);
        return temp;
    }    
    friend Sample operator*(Sample ob1, Sample &ob2){  //no ref for ob1
        Sample temp;
        temp.s=ob1.s*ob2.s;
        return temp;
    }      
};

int main() {
Sample s1(5), s2;
s2=s1++;
cout<<s2;
cout<<s1;
s2=10+s1;
Sample s3=(--s1)*s2;
cout<<s3;
}