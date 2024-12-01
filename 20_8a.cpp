#include<bits/stdc++.h>
using namespace std;

template<class    T, int count=3>
void iterate(T x){
    for(int i=0;i<count;i++){
        cout<<x<<" ";
    }
}
int main() {
iterate<int, 4>(5);   //true

}