
import java.awt.*;
import java.awt.event.*;

import javax.swing.*;


public class Gui_calculator extends JFrame implements ActionListener {
    JLabel l1, l2, l3;
    JButton b1;
    JTextField t1, t2, t3;

//Multiplication variables
    JLabel l01, l02, l03;
    JButton b01;
    JTextField t01, t02, t03;

    //Substration variables
    JLabel l001, l002, l003;
    JButton b001;
    JTextField t001, t002, t003;
//Division variables
    JLabel l0001, l0002, l0003;
    JButton b0001;
    JTextField t0001, t0002, t0003;

    Gui_calculator() {
        //Addition variables
        l1 = new JLabel("INPUT 1");
        l2 = new JLabel("INPUT 2");
        l3 = new JLabel("OUTPUT");
        b1 = new JButton("Addition");

        t1 = new JTextField(10);
        t2 = new JTextField(10);
        t3 = new JTextField(10);

        add(l1);
        add(t1);
        add(l2);
        add(t2);
        add(l3);
        add(t3);
        add(b1);

        b1.addActionListener(this);

        setSize(200, 200);
        setLayout(new FlowLayout());
        setTitle("Gui_Calculator");
        //break

  //Multiplication variables
        l01 = new JLabel();
        l02 = new JLabel();
        l03 = new JLabel();
        b01 = new JButton("Multiplication");

        //t01=new JTextField(10);
        // t02=new JTextField(10);
        t03 = new JTextField();

        add(l01);
        // add(t01);
        // add(l02);
        //   add(t02);
        //  add(l03);
        //add(t03);
        add(b01);

        b01.addActionListener(this);



        setSize(200, 200);
        setLayout(new FlowLayout());

        //substraction variables

        l001 = new JLabel();
        l002 = new JLabel();
        l003 = new JLabel();
        b001 = new JButton("Substation");

       // t001 = new JTextField(10);
       // t002 = new JTextField(10);
        t003 = new JTextField(10);

        add(l001);

        add(b001);

        b001.addActionListener(this);

        setSize(200, 200);
        setLayout(new FlowLayout());
        //break

        //Division variables

        //Multiplication variables
        l0001 = new JLabel();
        l0002 = new JLabel();
        l0003 = new JLabel();
        b0001 = new JButton("Division");

        //t01=new JTextField(10);
        // t02=new JTextField(10);
        t0003 = new JTextField();

        add(l0001);
        add(b0001);

        b0001.addActionListener(this);



        setSize(200, 200);
        setLayout(new FlowLayout());

    }

    public void actionPerformed(ActionEvent ae) {
        //addition variables
        float a, b, c;
        if (ae.getSource() == b1) {
            a = Float.parseFloat(t1.getText());
            b = Float.parseFloat(t2.getText());
            c = a + b;
            t3.setText(String.valueOf(c));
            t3.setText(String.valueOf(c));


        }
        //Multiplication variables

        float rr = 0, tt, gg;
        if (ae.getSource() == b01) {
            rr = Float.parseFloat(t1.getText());
            tt = Float.parseFloat(t2.getText());
            gg = rr * tt;


            t3.setText(String.valueOf(gg));
            t3.setText(String.valueOf(gg));


        }

        //Subtraction variables

        float dr = 0, dt, dg;
        if (ae.getSource() == b001) {
            dr = Float.parseFloat(t1.getText());
            dt = Float.parseFloat(t2.getText());
            dg = dr - dt;


            t3.setText(String.valueOf(dg));
            t3.setText(String.valueOf(dg));


        }

        //Division variables
        float zr = 0, zt, zg;
        if (ae.getSource() == b0001) {
            zr = Float.parseFloat(t1.getText());
            zt = Float.parseFloat(t2.getText());

            try {
                zg = zr / zt;


                t3.setText(String.valueOf(zg));
                t3.setText(String.valueOf(zg));
            }
            catch (Exception e)
            {
                System.out.println("Cannot divide by zero");
            }



        }

    }

    public static void main(String args[]) {
        Gui_calculator a = new Gui_calculator();
        a.setVisible(true);
        a.setLocation(200, 200);

    }

}
