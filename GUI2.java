import java.awt.*;
class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
    Frame fobj = new Frame("Marvellous");
    fobj.setSize(600,600);
    fobj.setVisible(true); //jr visible set nasel tr frame hi RAM vr tayar hote pn disat nahi
    }
}
class GUI2
{
    public static void main(String Arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("Marvellous");
    }
}