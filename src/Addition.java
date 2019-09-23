
import  java.util.Scanner;

 class  Addition extends Multiplication {
    public void Add() {
        int x, y, z;

        Scanner in = new Scanner(System.in);
        System.out.print("Please enter two numbers to add:");
        x = in.nextInt();
        y = in.nextInt();
        z = x + y;
        System.out.println(x +"+"+ y+"="+ z);






}
}

