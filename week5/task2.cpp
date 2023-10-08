#include <iostream>
using namespace std;
double volume(float l, float w, float h);
main()
{
    cout << "Enter the length of the pyramid (in meters): ";
    float length;
    cin >> length;
    cout << "Enter the width of the pyramid: ";
    float width;
    cin >> width;
    cout << "Enter the height of the pyramid: ";
    float height;
    cin >> height;
    cout << "Enter the desired output unit (milimeters, centimeters, kilometers): ";
    string unit;
    cin >> unit;
    double result = volume(length, width, height);
    if (unit == "meters")
    {
        cout << "The volume of the pyramid is: " << result << " cubic meters";
    }
    if (unit == "centimeters")
    {
        cout << "The volume of the pyramid is: " << result << " cubic centimeters";
    }
    if (unit == "kilometers")
    {
        cout << "The volume of the pyramid is: " << result << " cubic kilometers";
    }
}
double volume(float l, float w, float h)
{
    float volume = (l * w * h) / (3);
    return volume;
}