
#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int id;
    string contact;
public:
    Student(string n, int i, string c) {
        name = n;
        id = i;
        contact = c;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact: " << contact << endl;
    }
};

// Subclasses
class ICTStudent : public Student {
private:
    string courseType;
    int stage;
public:
    ICTStudent(string n, int i, string c, string t, int s) : Student(n, i, c) {
        courseType = t;
        stage = s;
    }
    void display() {
        cout << "ICT Student" << endl;
        Student::display();
        cout << "Course type: " << courseType << endl;
        cout << "Stage: " << stage << endl;
    }
};

class LawStudent : public Student {
private:
    string courseType;
public:
    LawStudent(string n, int i, string c, string t) : Student(n, i, c) {
        courseType = t;
    }
    void display() {
        cout << "Law Student" << endl;
        Student::display();
        cout << "Course type: " << courseType << endl;
    }
};

class BusinessStudent : public Student {
private:
    string courseType;
public:
    BusinessStudent(string n, int i, string c, string t) : Student(n, i, c) {
        courseType = t;
    }
    void display() {
        cout << "Business Student" << endl;
        Student::display();
        cout << "Course type: " << courseType << endl;
    }
};

int main() {
    // Create some student objects
    ICTStudent s1("Peter Hale", 2345, "phale@oxford.com", "BSC-IT", 1);
    LawStudent s2("Stiles Mccall", 6789, "smccall@oxford.com", "Certificate");
    BusinessStudent s3("Lydia West", 10111213, "lwest@oxford.com", "Diploma");

    // Display their details
    s1.display();
    cout << endl;
    s2.display();
    cout << endl;
    s3.display();

    return 0;
}