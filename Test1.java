import java.sql.*;

class Test1
{
    public static void main(String A[])
    {
        try{
            Connection cobj = DriveManager.getConnection("path","username","password");

            STatement sobj = cobj.createStatement();

            ResultSet robj = sobj.executeQuery("select *from student");

            while(robj.next())
            {
                System.out.println(robj.getInt("rno"));
                System.out.println(robj.getString("name"));
                System.out.println(robj.getString("city"));
            }
        }
    }
}