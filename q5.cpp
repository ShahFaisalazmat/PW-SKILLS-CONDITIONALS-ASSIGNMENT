#include <iostream>
using namespace std;
int main () {
    char op;
    int a,b;
    cout<<"Enter an operator (+, -, *, /): ";
    cin>>op;
    cout<<"ENTER NUM 1 : ";
    cin>>a;
    cout<<"ENTER NUM 2 : ";
    cin>>b;
    switch (op) {
    case '+':
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        break;
    
    case '-': 

        cout<<a<<" - "<<b<<" = "<<a-b<<endl;
        break;
     
    case '*':
    
        cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        break;
    
    case '/':
            if (b != 0)
                cout << a << " / " << b << " = " << a / b << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;

        default:
            cout << "Error! Operator is not correct" << endl;
            break;
    }

    return 0;
}