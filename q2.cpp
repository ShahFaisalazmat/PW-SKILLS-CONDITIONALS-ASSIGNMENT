#include <iostream>
using namespace std;
int main () { 
    int num;
    cout<<"ENTER NUMBER :";
    cin>>num;
    if(num<=0) {
        cout<<"Absolute Value : "<<(-1*num)<<endl;
    }
    else{
        cout<<"Absolute Value : "<<num<<endl;
    }
    return 0;
}