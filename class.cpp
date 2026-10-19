#include <iostream>
using namespace std;
class base
{   int rollNumber;
    int *ptr;
    char *name;
    int &ref;
    static int x;
    const int y;
    public:
    base(int rollNumber, int b, char *name, int &ref):rollNumber(rollNumber),y(b),ref(ref)
    {
        ptr = new int;
        *ptr = rollNumber;
        int size = strlen(name);
        this->name = new char[size + 1];
        strcpy(this->name, name);
    }
    void display()
    {   cout << "Roll Number: " << rollNumber << endl;
        cout << "Pointer Value: " << *ptr << endl;
        cout << "Name: " << name << endl;
        cout << "Reference Value: " << ref << endl;
        cout << "This is base class" << endl;
    }
};
int base::x = 0;
int main()
{
    int a = 10;
    int b = 20;
    char name[] = "Base Class";
    base obj(a, b, name, a);
    obj.display();
    return 0;
}