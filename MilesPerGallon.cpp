#include <iostream>
using namespace std;

int main()
{
    int gallons = 15;
    int milesLeft = 375;
    int milesPerGallon = milesLeft / gallons;
    cout << "The amount of gallons your car uses per mile is " << milesPerGallon;
    return 0;
}