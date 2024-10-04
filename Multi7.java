class Demo extends Thread
{               //method 3
    public void run() //thread ni kay kam karav he logic ya method madhe liha   
    {
        try{
        int i = 0;
        String name = Thread.currentThread().getName();
        for(i = 0; i <= 10; i++)
        {
            System.out.println("Running thread : "+name+" with value :"+i); 
        }
    }
    catch(Exception obj)
    {}
    }
}

class Multi7
{
    public static void main(String Arg[])
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());
        Demo obj1 = new Demo();
        Demo obj2 = new Demo();
            //method 4
        obj1.setName("PPA");
        obj2.setName("LB");

        System.out.println("Priority of obj1 is : "+obj1.getPriority());
        System.out.println("Priority of obj2 is : "+obj2.getPriority());

        obj1.setPriority(10);  
        obj2.setPriority(10);

        System.out.println("Priority of obj1 is : "+obj1.getPriority());
        System.out.println("Priority of obj2 is : "+obj2.getPriority());
       
            //method 5 
        obj1.start();//start ne thread schedule hoto ani thread madhe run method yete
        obj2.start();
    }
}