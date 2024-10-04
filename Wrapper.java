class Wrapper
{
    public static void main(String Arg[])
    {
        Integer iobj = new Integer(11);
        int no = 11;

        Integer i = no; //Autoboxing

        int j = iobj.intValue();  //Unboxing

        System.out.println(j);

    }
}

/*
    Premitive datatype      Wrapper class

        char                    Character
        int                     Integer
        float                   Float
        double                  Double
        boolean                 Boolean
        short                   Short
        long                    Long
        byte                    Byte
 */