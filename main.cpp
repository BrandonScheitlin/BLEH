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
    double sum = 0, percent, redCount = 0;
    double aRadius[MAXCAPACITY];
    int radiusCount = 0, count = 0, Vcount = 0, i = 0;
    string color, ifName, getlines;
    ifstream file;
    Sphere classes;

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
    getline(file, getlines);
    getline(file, getlines);
    
    cout << "Number " << "Radius " << "Color " << "Area "  << "Volume" << endl;
    while(file >> aRadius[i] >> color)
    {
        classes.setColor(color);
        RadiusCount++;
        cout << RadiusCount << " " << aRadius[i];
        i++;
        cout << " " << color << " " << classes.area() << " " << classes.volume() << endl;
        if (color == "red")
        {
            redCount++;
        }
        if (classes.volume() >= 215)
        {
            Vcount++
        }
        sum += classes.area();
    }
    percent = redCount / count * 100;
    cout << "Total Number of Spheres = " << count << endl;
    cout << percent << " % of Spheres are red" << endl;
    cout << Vcount << "Spheres have a Volume over 215." << endl;
    cout << "Average Area = " << sum / count << endl;


    return 0;
}
