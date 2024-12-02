#include<bits/stdc++.h>
using namespace std;
class Time{
int hour, minute, second;
public:
Time(int hour=0, int minute=0, int second=0){
    this->hour=hour;
    this->minute=minute;
    this->second=second;
}
friend Time add(Time &T1, Time &T2){
Time temp;
temp.hour=T1.hour+T2.hour;
temp.minute=T1.minute+T2.minute;
temp.second=T1.second+T2.second;
if(temp.second>60){
    temp.minute+=temp.second/60;
    temp.second=temp.second%60;
}
if(temp.minute>60){
    temp.hour+=temp.minute/60;
    temp.minute=temp.minute%60;
}
return temp;
}
void display(){
    cout<<hour<<" hr "<<minute<<" min "<<second<<" sec "<<endl;
}
};
int main() {
Time T1(3, 40, 30), T2(2, 30, 40), T3;
T3 = add(T1, T2);
T3.display();
}