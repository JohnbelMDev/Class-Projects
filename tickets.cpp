#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   
      //Variable to stores values for classes
      int classA ,classB,classC;
      float total = 0.0000;
    cout <<"How many tickets sold for class A\n";
//Stream operator to take input from users 
    cin>>classA;

    cout <<"How many tickets sold for class B\n";
    cin>>classB;
    cout<<"How many tickets sold for class C\n";
    cin>>classC;
    total= (classA * 15) + (classB *12) + (classC * 9);
    cout << "Each class cost" << total <<    "$" <<endl;


    return 0;
}
