#include<bits/stdc++.h>
using namespace std;

class Student {
    public : 
    int roll;
    int cls;
    double gpa;


    // constructor 
    Student(int roll, int cls, double gpa) {
        this->roll = roll; // this is a pointer which points to the current object  like rahim and karim 
        // (*this).roll = roll; // this is also same as above line
        this->cls = cls;
        this->gpa = gpa;
    }
};


int main(){
    Student rahim(101, 10, 4.00);
    Student karim(102, 10, 3.75);
    // karim.roll = 102;
    // karim.cls = 10;
    // karim.gpa = 3.75;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}

