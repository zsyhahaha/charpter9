//
// Created by »ªË¶ on 13/7/2022.
//
#include <iostream>
#include <string>

struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    using namespace std;
    auto ch = new chaff[2];
    cout<<"Enter two dross"<<endl;
    for(int i = 0 ; i < 2 ; i++)
    {
        cin.getline(ch[i].dross,20);
    }
    cout<<"Enter two slag :"<<endl;
    for(int i = 0 ; i < 2 ; i++)
    {
        cin>>ch[i].slag;
    }
    cout<<"Two chaff info :"<<endl;
    for(int i = 0 ; i < 2 ; i++)
    {
        cout<<"Dross :"<<ch[i].dross<<" Slag :"<<ch[i].slag<<endl;
    }
    delete [] ch;//ÊÍ·Å¿Õ¼ä
    return 0;

}