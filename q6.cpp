#include <iostream>
using namespace std;

int main() {
    int marks;
    char grade;

    // Prompt the user to enter their marks
    cout << "Enter Your Marks: ";
    cin >> marks;

    // Check the range of the marks and assign the corresponding grade
    if (marks >= 90 && marks <= 100) {
        grade = 'A';
        cout << "Your Grade is A+" << endl;
    } else if (marks >= 80 && marks < 90) {
        grade = 'A';
        cout << "Your Grade is A" << endl;
    } else if (marks >= 70 && marks < 80) {
        grade = 'B';
        cout << "Your Grade is B+" << endl;
    } else if (marks >= 60 && marks < 70) {
        grade = 'B';
        cout << "Your Grade is B" << endl;
    } else if (marks >= 50 && marks < 60) {
        grade = 'C';
        cout << "Your Grade is C" << endl;
    } else if (marks >= 40 && marks < 50) {
        grade = 'D';
        cout << "Your Grade is D" << endl;
    } else if (marks >= 30 && marks < 40) {
        grade = 'E';
        cout << "Your Grade is E" << endl;
    } else if (marks >= 0 && marks < 30) {
        grade = 'F';
        cout << "Your Grade is F" << endl;
    } else {
        cout << "Invalid Marks! Please enter marks between 0 and 100." << endl;
    }

    return 0;
}
