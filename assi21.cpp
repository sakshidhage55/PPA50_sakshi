// #include<iostream>
// using namespace std;

// class Demo
// {
//         public:
//         void fun(int i)
//         {cout<<"First definition";}
//         void fun(int i, int j)
//         {cout<<"Second definition";}
// };
// int main()
// {
//     Demo obj();

//     obj.fun(10);
//     obj.fun(10,20);

//     return 0;
// }

#include <iostream>
using namespace std;

class Demo
{
    public:
        void fun(int *p)
        {cout<<"First definition";}
        void fun(float *p)
        {
            cout << "Second definition";
        }
        void fun( int no)
        {cout<<"Third definition"};
};

        int main(){
            int no = 11;
            float f = 3.14;

            Demo obj();

            obj.fun(no);
            obj.fun(&no);
            obj.fun(&f);
            return 0;
        }
