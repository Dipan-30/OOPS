#include<bits/stdc++.h>
using namespace std;

int main() {
int a=5, b=0;
try{
    try{
    if(b==0) throw b;
}
catch(int x){
    if(x==0) throw x-1;
}
}
catch(int x){
    cout<<x;
}
}