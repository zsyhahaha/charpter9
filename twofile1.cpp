//
// Created by »ªË¶ on 13/7/2022.
//
#include <iostream>

int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main()
{
    using namespace std;
    cout<<"main() reports the following addresses: &tom = "<<&tom<<" &dick = "<<&dick<<" &harry = "<<&harry<<endl;
    remote_access();
    return 0;
}