
import  java.util.Scanner;

class Division extends Substraction {
    public void div() {
        int r, t, o;

        Scanner inp = new Scanner(System.in);
        System.out.println("Please enter two numbers to Division:");
        r = inp.nextInt();
        t = inp.nextInt();

        try {o = r / t;
            System.out.println(r +"/"+ t+"="+ o);

        }
        catch (Exception e)
        {
            System.out.println("Can't divide 0" + e);
        }



    }
}