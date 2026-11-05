 #include "stdafx.h"
    #include <iomanip>
    #include <iostream>
    #include<stdio.h>
    #include <cstdlib>
    #include <string>
    #include <iomanip>
    double getaccelarate(double &, double &);
    double getbrake(double &, double &);
    double getcruise(double &, double &);
    void outputStatusHeader();
    void demo();
    double updateDistanceTraveled(double &, double &);
    int delta = 5;
    //double brakee = 0;


    double previousSpeed = 0;
    double currentSpeed = 0;


    using namespace std;


    int main()
    {
        char  command;
        //The amount of elapsed time for each calculation interval 
    (fixed at 1 second)
        const int timeInterval = 1;


        //double currentSpeed=0;
        //convert into the distance travelled by feet
        int    totalFeetTraveled = 0;
        //the average speed travel
        int averageSpeed = 0;


        //double previousSpeed =0;
        int averageSpeed_FeetPerSecond = 0;
        int  intervalFeetTraveled = 0;
        int speed = 0;
        //the amount of time that the time will increase by
        //const int delta= 5;




        while (true)
        {
                cout << "Command:";
                cin >> command;
                switch (command)
            {


            case 'a':
               //double accelarate;
                double speed;
                speed = getaccelarate(currentSpeed, previousSpeed);
              //cout << getaccelarate;
                cout << "Accelerate"<<setw(20)<<"Accelerating"<<setw(5);
                cout << speed;
                double conve;
                conve = updateDistanceTraveled(previousSpeed, 
    currentSpeed);
                    cout <<setw(10)<<setprecision(3)<<conve<<endl;

                //updateDistanceTraveled(previousSpeed,currentSpeed);
                break;





            case 'b':
                 double brake;
                 brake = getbrake(previousSpeed, currentSpeed);
                 cout << "Brake" <<setw(20)<<"Braking"<<setw(5);
                 cout << brake; 
                //double brake1 = 0;
                //brake1 = updateDistanceTraveled(previousSpeed, 
                 currentSpeed);
                 cout << setw(10) << setprecision(3) << conve << endl;




                break;

            case 'c':
                 double cruise;
                 cruise = getcruise(previousSpeed, currentSpeed);
                 cout << "Cruise" << setw(20) << "Cruising" << setw(5);
                 cout << cruise;
                 cout << setw(10) << setprecision(3) << conve << endl;


            break;




        case 'h':
            outputStatusHeader();
            break;

        case 'd':

            demo();

            break;
        case 'q':
            cout << " Exit program";
            exit(1);

            break;

        default:
            cout << "Invalid command" << endl; 
            break;
        }



    }




    system("pause");
    return 0;
}
//converting mph to feet perhours
double updateDistanceTraveled(double &previousSpeed,double &currentSpeed)
{
    //getaccelarate(previousSpeed, currentSpeed);
    double averageSpeed = 0; 
    double averageSpeed_FeetPerSecond = 0; 
    double intervalFeetTraveled=0;
    //double totalFeetTraveled=0;
    const int timeInterval = 1;

    averageSpeed = (previousSpeed + currentSpeed) / 2;
    averageSpeed_FeetPerSecond = averageSpeed * 5280.0 / 3600.0;
    intervalFeetTraveled = averageSpeed_FeetPerSecond * timeInterval;
    return intervalFeetTraveled;
    /*totalFeetTraveled = totalFeetTraveled + intervalFeetTraveled;
    return totalFeetTraveled;*/
}

//to decrease speed
double getbrake(double &previousSpeed, double &currentSpeed)
{



    previousSpeed = currentSpeed;
    currentSpeed -= delta;

    return currentSpeed;


}
//to increase speed
double getaccelarate(double &previousSpeed, double &currentSpeed)
{


    previousSpeed = currentSpeed;
    currentSpeed = currentSpeed + delta;
    return currentSpeed;


}

// to stay in current speed
double getcruise(double &previousSpeed, double &currentSpeed)
{
    previousSpeed = currentSpeed;
    return previousSpeed;

}
//unfinished demo

void demo()

{

    cout << "Function Current State Current Speed Interval Distance 
    Total Feet (and miles) traveled" << endl;

    cout << "-----------------------------------------------------------------------------------" << endl;

    for (int x = 1; x < 4; x++)
    {
        double speed;
        speed = getaccelarate(currentSpeed, previousSpeed);
        //cout << getaccelarate;
        cout << "Accelerate" << setw(20) << "Accelerating" << setw(5);
        cout << speed;
        double conve;
        conve = updateDistanceTraveled(previousSpeed, currentSpeed);
        cout << setw(10) << setprecision(3) << conve << endl;

    }

}

//for supported commands
void outputStatusHeader()

{

    cout << " supported commands\n"
        << " a         accelerate\n"
        << " b         brake\n"
        << " c         cruise\n"
        << " d         demo\n"
        << " h         print this help text\n"
        << " q         quit(end the  program)"
        << endl;

}

{

        cout << " supported commands\n"
            << " a         accelerate\n"
            << " b         brake\n"
            << " c         cruise\n"
            << " d         demo\n"
            << " h         print this help text\n"
            << " q         quit(end the  program)"
            << endl;
}
