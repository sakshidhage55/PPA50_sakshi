#include <iostream>
using namespace std;

class Hello
{
public:
    void Fun();
    void Gun();
};

class Demo
{
public:
    int i;

private:
    int j;

protected:
    int k;

public:
    Demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }
    // friend void Hello::Fun();
    // friend void Hello::Gun();
    friend class Hello; //whole class is a friend mhanje hello class cha object ani function demo access kartil
};

void Hello::Fun()
{
    Demo obj;
    cout << obj.i << "\n";
    cout << obj.j << "\n";
    cout << obj.k << "\n";
}

void Hello::Gun()
{
    Demo obj;
    cout << obj.i << "\n";
    cout << obj.j << "\n";
    cout << obj.k << "\n";
}

int main()
{
    Hello hobj;

    hobj.Fun();
    hobj.Gun();

    return 0;
}