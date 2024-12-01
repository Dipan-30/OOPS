#include<bits/stdc++.h>
using namespace std;

namespace ns{
    void display();
    class Sample{
        public:
        void display();
    };
}
void ns::display(){
    cout<<"ns version of disp: \n";
}
void ns::Sample::display(){
    cout<<"ns within sample class version of disp: \n";
}
int main() {
using namespace ns;
display();

Sample ob;
ob.display();
}