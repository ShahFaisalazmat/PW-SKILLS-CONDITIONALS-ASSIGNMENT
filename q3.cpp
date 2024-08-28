#include <iostream>
using namespace std;
int main () {
    int cp,sp;
    cout<<"Enter cost price : ";
    cin>>cp;
    cout<<"Ente selling price : ";
    cin>>sp;
    if(cp>sp) {
        cout<<"LOSS : "<<cp-sp<<endl;
    }
    else if(cp<sp) {
        cout<<"Profit : "<<sp-cp<<endl;
    }
    return 0;
}