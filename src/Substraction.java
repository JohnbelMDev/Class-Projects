
import  java.util.Scanner;

class Substraction {
    public void sub() {
        int l, q, b;

        Scanner in = new Scanner(System.in);
        System.out.println("Please enter two numbers to Substract:");
        l = in.nextInt();
        q = in.nextInt();
        b = l -q;
        System.out.println(l +"-"+q+"="+ b);


    }
}