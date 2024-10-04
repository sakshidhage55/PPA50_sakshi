
class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base constructor");
    }
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
}

class Derived extends Base   //class Derived : public Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived Constructor");
    }
    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }
}


class SingleX
{
    public static void main(String A[])  //Arg jagi kahi pn nav deu shakto
    {
        Base bobj1 = new Base();        //Nocasting
        Derived dobj1 = new Derived();   //Nocasting
        Base bobj2 = new Derived();     //Upcasting(A)
        Derived aobj2 = new Base();     //Downcasting(NA)
       
    }
}