class Student implements Cloneable//jr copy karaychi asel tr implements Cloneable lihaych ani nasel karu dyaych tr nka lihu
{
    public String Name;
    public int Marks;
    public int Age;

    public Student(String str, int A, int B)
    {
        this.Name = str;           //C++ madhe this ha pointer mhanun indirct accessing operator
        this.Marks = A;
        this.Age = B;
    }
    public Object clone() throws CloneNotSupportedException  //clone method
    {
        return super.clone();   //super ha parent kade jato
    }
}

class CopyDemo
{
    public static void main(String Arg[])
    {
        try
        {
        Student sobj = new Student("Amit", 87, 25);
        System.out.println("Name of student:" +sobj.Name);
        System.out.println("Marks obtained by the student:" + sobj.Marks);
        System.out.println("Age of student:" + sobj.Age);
        
        //    new obj   typecast  yachasarkha obj
        Student sobjx = (Student)sobj.clone();
        System.out.println("Name of student:" + sobjx.Name);
        System.out.println("Marks obtained by the student:" + sobjx.Marks);
        System.out.println("Age of student:" + sobjx.Age);
    }
        catch(Exception obj) //geenric catch
        {}
    }
}