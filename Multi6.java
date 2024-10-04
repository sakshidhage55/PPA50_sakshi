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
            Thread.sleep(1000); 
        }
    }
    catch(Exception obj)
    {}
    }
}

class Multi6
{
    public static void main(String Arg[]) throws Exception
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());
        Demo obj1 = new Demo();
            //method 4
        obj1.setName("PPA");
            //method 5
        obj1.start();
      
        obj1.join();
        System.out.println("End of main thread");
    }
}//main thread should survive stiill child thread ends