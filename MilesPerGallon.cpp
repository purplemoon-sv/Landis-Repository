#include <iostream>
using namespace std;

int main()
{
    int gallons = 15;
    int milesLeft = 375;
    //Data for calculation
    int milesPerGallon = milesLeft / gallons;
    //Math
    cout << "The amount of gallons your car uses per mile is " << milesPerGallon;
    //Shown to the User
    return 0;
}