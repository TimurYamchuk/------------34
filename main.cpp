#include<iostream>
using namespace std;
class Student
{
    char* name;
    int age;
    char* email;
public:
Student()
{
    name = nullptr;
    email = nullptr;
    age = 0;
    cout << "Constuctor by default\n";
}
Student(const char* n, int a,const char* e )
{
    name = new char[strlen(n) + 1];
    strcpy (name, n);
    age = a;
    cout << "Constuctor by params\n";
      email = new char[strlen(e) + 1];
    strcpy (email, e);
}
void Input()
{
    char buff[30];
    cout << "Enter name ->";
    cin >> buff;
    if (name != nullptr)
    {
        cout << "Delete...." << name << "\n";
        delete[] name;
    }
    name = new char [ strlen (buff) + 1];
    strcpy (name, buff);
    cout << "Enter age ->";
    cin >> age;
    cout << "Enter email ->";
    cin >> buff;
    if (email != nullptr)
    {
        cout << "Delete...." << email << "\n";
        delete[] email;
    }
     email = new char [ strlen (buff) + 1];
    strcpy (email, buff);
}
void Print()
{
    cout << "Name: " << name << "\tAge: " << age << "Email:" << email << endl;

}
~Student(){
    delete[] name;
    delete [] email;
    cout << "Destructor\n";
}

};



int main()
{
Student obj2("Oleg", 25,"yamchuktimur@gmail.com");
	obj2.Print();
	obj2.Input();
    obj2.Print();

    return 0;
}