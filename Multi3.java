class Demo extends Thread
{               //method 3
    public void run()//thread ni kay kam karav he logic ya method madhe liha   
    {
        int i = 0;
        String name = Thread.currentThread().getName();
        for(i = 0; i <= 10; i++)
        {
            System.out.println("Running thread : "+name+" with value :"+i);
        }
    }
}

class Multi3
{
    public static void main(String Arg[])
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());
        Demo obj1 = new Demo();
        Demo obj2 = new Demo();
            //method 4
        obj1.setName("PPA");
        obj2.setName("LB");
            //method 5
        obj1.start();//start ne thread schedule hoto ani thread madhe run method yete
        obj2.start();
    }
}