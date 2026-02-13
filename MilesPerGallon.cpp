#include <iostream>
using namespace std;

int main()
{
    int gallons = 15;
    int milesLeft = 375;
    //Data for calculation
    int milesPerGallon = milesLeft / gallons;
    //Miles Per Gallon equals miles left divided by gallons
    cout << "The amount of miles your car travels per gallon is " << milesPerGallon;
    //Shown to the User
    return 0;
}