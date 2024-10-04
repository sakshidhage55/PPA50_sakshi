class ArrayDemoLoops
{
    public static void main(String Arg[])
    {       
        int Arr[] = {10,20,30,40,50};  
        int i = 0;  //counter

        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }

        i = 0;  //counter
        while(i < Arr.length)
        {
            System.out.println(Arr[i]);
            i++;
        }

    }
}