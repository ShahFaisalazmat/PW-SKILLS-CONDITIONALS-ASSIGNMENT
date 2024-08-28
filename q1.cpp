#include <iostream>
using namespace std;
int main () {
    int lnt,width;
    cout<<"Enter Length : ";
    cin>>lnt;
    cout<<"Enter Width : ";
    cin>>width;
    if(lnt==width) {
        cout<<"It is Square"<<endl;
    }
    else {
        cout<<"It is rectangle"<<endl;
    }
    return 0;
}