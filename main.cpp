#include "Sphere.h"
#include <iostream>
#include <cstring>
#include <cmath>
#include <fstream>
#include <cstdlib>

using namespace std;

const int MAXCAPACITY = 83;

int main()
{
    //Data Abstraction
    double radius = 0, sum = 0;
    double aRadius[MAXCAPACITY];
    int Rcount = 0, count = 0, Vcount;
    string color, ifName;
    ifstream file;

    //Input
    do
    {
        cout << "Enter Name of Data File: ";
        cin >> ifName;
        file.open(ifName.c_str());
        if(!file)
        {
            cout << "ERROR: file not open." << endl;
        }
    }while(!file);
    //Process
    cout << "Number " << "Radius " << "Color " << "Area "  << "Volume" << endl;
    while(file >> radius >> color)
    {
        Sphere.setColor(color);
        for(int i = MAXCAPACITY; i < MAXCAPACITY - i; i--)
        {
            aRadius[MAXCAPACITY - i] = radius;
            cout << ++count << " " << radius << " " << color << Sphere.area()
                 << Sphere.volume() << endl;
        }
        if (Sphere.getColor() == "red")
        {
            Rcount++;
        }
        if (Sphere.volume() >= 215)
        {
            Vcount++;
        }
        sum += Sphere.area();
    }
    cout << "Total Number of Spheres = " << count << endl;
    cout << Rcount << "% of Spheres are red" << endl;
    cout << Vcount << "Spheres have a Volume over 215." << endl;
    cout << "Average Area = " << sum / count << endl;


    return 0;
}
