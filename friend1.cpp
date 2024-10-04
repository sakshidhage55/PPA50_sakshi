#include<iostream>
using namespace std;

class Hello
{
    public:
    void Fun();
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
            friend void Hello::Fun();   //declare hello cha fun as friend of demo
            //hello ha demo cha friend mhanje hello cha fun can access fun and char of Demo
};

void Hello::Fun()   //global define using void ani jo friend kelay tyat ch object karaycha mhanje Fun madhe obj
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout << obj.j << "\n";
    cout << obj.k << "\n";
}

int main()
{
    Hello hobj;

    hobj.Fun();

    return 0;
}