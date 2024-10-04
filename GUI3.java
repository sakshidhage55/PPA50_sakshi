// import java.awt.*;  //awt che content yenar
// import java.awt.event.*;  //awt madhla event dabba yenar jo vr yet nhvta

// class MarvellousFrame
// {
//     public MarvellousFrame(String title)
//     {
//     Frame fobj = new Frame("Marvellous");
//     fobj.setSize(600,600);
//     fobj.setVisible(true); 
//     fobj.addWindowListener(new MarvellousListener());
//     }
// }

// class MarvellousListener implements WindowListener  //in built interface Windowlistener
// {
//     public void windowDeactivated(WindowEvent obj){}
    
//     public void windowActivated(WindowEvent obj){}

//     public void windowDeiconified(WindowEvent obj){}

//     public void windowIConified(WindowEvent obj){}

//     public void windowClosed(WindowEvent obj){}

//     public void windowClosing(WindowEvent obj){}
//     {
//         System.exit(0);
//     }

//     public void windowOpened(WindowEvent obj){}

// }


// class GUI3
// {
//     public static void main(String Arg[])
//     {
//         MarvellousFrame mobj = new MarvellousFrame("Marvellous");
//     }
// }


import java.awt.*;  
import java.awt.event.*; 

class MarvellousFrame {
    public MarvellousFrame(String title) {
        Frame fobj = new Frame(title);  
        fobj.setSize(600, 600);  
        fobj.setVisible(true);  
        fobj.addWindowListener(new MarvellousListener());
    }
}

class MarvellousListener implements WindowListener {
    public void windowDeactivated(WindowEvent obj) {}
    public void windowActivated(WindowEvent obj) {}
    public void windowDeiconified(WindowEvent obj) {}
    public void windowIconified(WindowEvent obj) {}  
    public void windowClosed(WindowEvent obj) {}

    
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);  
    }

    public void windowOpened(WindowEvent obj) {}
}

public class GUI3 {
    public static void main(String[] args) 
    {
        MarvellousFrame mobj = new MarvellousFrame("Marvellous");
    }
}
