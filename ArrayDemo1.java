class ArrayDemo1
{
    public static void main(String Arg[])
    {
        //int Arr[5] = { 10, 20, 30, 40, 50 }; not allowed
        //int Arr[] = {10,20,30,40,50};  //allowed

        int Arr[] = new int[]{10,20,30,40,50}; //allowed pn he changl nahi disat mhanun nhi vaprat

        System.out.println("Number of elements in array are :"+Arr.length);  
        // + is used for concatenation

        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
        System.out.println(Arr[3]);
        System.out.println(Arr[4]);
    }
}