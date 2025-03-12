#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
  
    Person(string n, int a) {
        name = n;
        age = a;
    }

    
    void showInfo() {
        cout << "نام: " << name << ", سن: " << age << endl;
    }
};


class Student : public Person {
private:
    int studentID; 

public:

    Student(string n, int a, int id) : Person(n, a) {
        studentID = id;
    }

  
    void showStudentInfo() {
        showInfo(); 
        cout << "شماره دانش‌آموزی: " << studentID << endl;
    }
};


class Teacher : public Person {
protected:
    string subject; 

public:
   
    Teacher(string n, int a, string sub) : Person(n, a) {
        subject = sub;
    }

   
    void showTeacherInfo() {
        showInfo();
        cout << "درس تدریسی: " << subject << endl;
    }
};


int main() {
    
    Student s1("علی", 16, 12345);
    cout << "🔹 اطلاعات دانش‌آموز:\n";
    s1.showStudentInfo();
    
    cout << "\n";

  
    Teacher t1("خانم رضایی", 35, "ریاضی");
    cout << "🔹 اطلاعات معلم:\n";
    t1.showTeacherInfo();

    return 0;
}



