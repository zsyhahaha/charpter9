//
// Created by »ªË¶ on 13/7/2022.
//
#include <iostream>

using namespace std;

double warming = 0.3;

void update(double dt);
void local();

int main()
{
    cout<<"global warming is "<<warming<<" degrees\n";
    update(0.1);
    cout<<"global warming is "<<warming<<" degrees\n";
    local();
    cout<<"global warming is "<<warming<<" degrees\n";
    return 0 ;
}