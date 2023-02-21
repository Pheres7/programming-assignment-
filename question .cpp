#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    string firstname;
    string lastname;
    int age;
public:
    void getInfo()
    {
        cout<<"Enter your firstname"<<endl;
        cin>>firstname;

        cout<<"Enter your lastname"<<endl;
        cin>>lastname;

        cout<<"Enter your age"<<endl;
        cin>>age;
        
    }
    void display_info()
    {
        cout<<"Displaying Data"<<endl;
        cout<<"Firstname  :"<<firstname<<endl;
        cout<<"Lastname   :"<<lastname<<endl;
        cout<<"Age        :"<<age<<endl;
    }
};
class Student : public Person
{
public:
    int Institution;
public:
    void getInstitution()
    {
        cout<<"Enter your Institution"<<endl;
        cin>>Institution;
    }
    void show_Institution()
    {
        cout<<"Student's Institution :"<<Institution<<"\n"<<endl;
    }
};
int main()
{
    Student obj1;
    obj1.getInfo();
    obj1.getInstitution();

    obj1.display_info();
    obj1.show_Institution();
    return 0; 
    }