//
// Created by »ªË¶ on 13/7/2022.
//
#include <iostream>

using namespace std;

extern double warming;

void update(double dt);
void local();

void update(double dt)
{
    extern double warming;
    warming += dt;
    cout<<"updating global warming to "<<warming<<" degrees\n";
}

void local()
{
    double warming = 0.8;

    cout<<"local warming = "<<warming<<" degrees\n";
    cout<<"but global warming = "<< ::warming<<" degrees\n";
}