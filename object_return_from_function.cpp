#include<bits/stdc++.h>
using namespace std;

class Student {
    public : 
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) {
        this->roll = roll;
        this->gpa = gpa;
    }
};

Student fun(){
    Student karim(102, 10, 3.75);
    return karim;
}
// this is working as static object and we are getting the return like a normal function 

int main(){
    Student rahim(101, 10, 4.00);
    Student obj = fun();
    
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}