#include<iostream>
using namespace std;

float Area(float Radius, float PI = 3.14)
{
    float Ans = 0.0f;
    Ans = PI * Radius * Radius;
    return Ans;
}
int main()
{
    float Ret = 0.0f;
    
    // Ret = Area(5.8, 3.14);
    // cout<<"Area is: "<<Ret<<"\n";

    Ret = Area(5.8, 7.20);
    cout << "Area is: " << Ret << "\n";  // 242.208

    Ret = Area(5.8);
    cout << "Area is: " << Ret << "\n";   //105.63

    return 0;
}