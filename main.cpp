/**
 * Cashion Penha
 * Lab 4
 * Resistane of wire
 * 04/10/2017
 */

/**< Preprocessor directive */
#include <iostream>
#include <math.h>

/**< This includes commonly used tools such as cout, cin. It prevents repetition of "std" before each case*/
using namespace std;

/**< Resistance function to calculate the resistance */
double resistance(double r,double l,double p)
{
    double resistance,A;//declaring variables
    A=M_PI*pow(r,2);//formula to calculate the area
    resistance=p*(l/A);
    cout.precision(2);
    return resistance;// returning the resistance value back to the main function
}

int main()//Main function
{
    /**< Declaring variables */
    double r,l,p;
    double Resresult;

    cout << "Electrical resistance of a wire Calculator" << endl;// displaying the title of the program

    /**< Do while loop to ensure value entered is greater then 0*/
    do
    {
        cout << "\nPlease enter the radius of the wire in m: ";
        cin >> r;
    }
    while (r<=0);

    /**< Do while loop to ensure value entered is greater then 0*/
    do
    {
        cout << "\nPlease enter the length of the wire in m: ";
        cin >> l;
    }
    while (l<=0);

    /**< Do while loop to ensure value entered is greater then 0*/
    do
    {
        cout << "\nPlease enter the resistivity of the wire in ohm.m: ";
        cin >> p;
    }
    while (p<=0);

    /**< Calling the resistance function to calculate the resistance */
    Resresult=resistance(r,l,p);
    cout << "\nThe electrical resistance of wire entered is: " << Resresult << endl;// displaying the results

    /**< displaying to the user the vales entered */
    cout << "\nConditions:" << endl;
    cout << "Radius is: " << r << "m" << endl;
    cout << "Length is: " << l << "m" << endl;
    cout << "Resistivity is: " << p << " ohm.m" << endl;

    return 0;
}
