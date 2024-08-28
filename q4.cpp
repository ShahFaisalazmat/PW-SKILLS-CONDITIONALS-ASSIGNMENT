#include <iostream>
using namespace std;
int main () {
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num>=0) {
        cout<<"USER ENTERED NUMBER : "<<num<<endl;
    }
    else if (num<0)
    {
        cout<<"The number is negative and skipped"<<endl;
    }
    return 0;
}