//
// Created by »ªË¶ on 13/7/2022.
//
#include <iostream>

using namespace std;

extern int tom;

static int dick = 10;

int harry = 200;

void remote_access()
{
    cout<<"remote() reports the following addresses: &tom = "<<&tom<<" &dick = "<<&dick<<" &harry = "<<&harry<<endl;
}