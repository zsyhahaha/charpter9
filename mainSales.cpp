//
// Created by »ªË¶ on 13/7/2022.
//
#include "sales.h"

void test01()
{
    using namespace SALES;
    double ar[] = {45,34,56};
    Sales s;
    setSales(s,ar,3);
    showSales(s);
}
void test02()
{
    using namespace SALES;
    Sales s1;
    setSales(s1);
    showSales(s1);
}
int main()
{
    //test01();
    test02();
    return 0;
}