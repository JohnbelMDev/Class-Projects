
import  java.util.Scanner;

class Multiplication {
    public void Multiply() {
        int x, y, z;

        Scanner in = new Scanner(System.in);
        System.out.println("Please enter two numbers to multiply:");
        x = in.nextInt();
        y = in.nextInt();
        z = x * y;
        System.out.println(x +"*"+ y+"="+ z);


    }
}