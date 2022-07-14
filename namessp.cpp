//
// Created by »ªË¶ on 13/7/2022.
//
#include <iostream>
#include "namesp.h"

void other();
void another();

int main()
{
    using debts::Debt;
    using debts::showDebt;

    Debt golf = {{"Benny","GoatSniff"},120.0};
    showDebt(golf);
    other();
    another();
    return 0;
}

void other()
{
    using std::cout;
    using std::endl;
    using namespace debts;

    Person dg = {"Doodles","Glister"};
    showPerson(dg);
    cout<<endl;
    Debt zippy[3];
    int i;
    for(i=0;i<3;i++)
    {
        getDebt(zippy[i]);
    }
    for(i=0;i<3;i++)
    {
        showDebt(zippy[i]);
    }
    cout<<"Total Debt : $"<<sumDebts(zippy,3)<<endl;


}

void another()
{
    using pers::Person;
    Person collector = {"Millo","Rightshift"};
    pers::showPerson(collector);
    std::cout<<std::endl;
}