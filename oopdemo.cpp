#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int No1;
        int No2;

        Arithmatic()
        {
            No1 = 0;
            No2 = 0;
        }
        Arithmatic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }
        //function method procedure API have same meanings
        int Addition()
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }
        int Substraction()
        {
            int Ans = 0;
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{
    int Value1 = 0, Value2 = 0, Ret = 0;

    cout<<"Enter First Number : \n";    
    cin>>Value1;

    cout<<"Enter Second Number : \n";
    cin>>Value2;

    Arithmatic obj(Value1,Value2);

    Ret = obj.Addition();
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = obj.Substraction();
    cout<<"Substraction is : "<<Ret<<"\n";

    return 0;
}