#include <iostream>
#include "coordin.h"
#include "auto.h"
//ิดย๋วๅตฅ
//charpter9
// main.cpp coordin.h coordin.cpp
// auto.cpp auto.h
// external.cpp support.cpp
// twofile1.cpp twofile2.cpp
// static.cpp
//newplace.cpp namesp.h namesp.cpp namessp.cpp
//chaff.cpp
//sales.h sales.cpp mainSales.cpp
using namespace std;

void test01()
{
    rect rplace;
    polar pplace;

    cout<<"Enter x and y"<<endl;
    while (cin>>rplace.x>>rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout<<"next two numbers:(q to quit)";
    }
    cout<<"bye!\n"<<endl;
}

void test02()
{
    int texas = 31;
    int year = 2022;
    cout<<"in main() , texas ="<<texas<<" "<<"&texas = "<<&texas<<endl;
    cout<<"in main() , year = "<<year<<" "<<"&year = "<<&year<<endl;
    oil(texas);
    cout<<"in main() , texas ="<<texas<<" "<<"&texas = "<<&texas<<endl;
    cout<<"in main() , year = "<<year<<" "<<"&year = "<<&year<<endl;
}

int main() {
    test01();
//    test02();
    return 0;
}
