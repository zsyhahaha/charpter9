//
// Created by 华硕 on 13/7/2022.
//

#ifndef CHARPTER9_SALES_H
#define CHARPTER9_SALES_H

namespace SALES
{
    const int Quarters = 4;
    struct Sales
    {
        double sales[Quarters];
        double average;
        double max;
        double min;
    };
    //从数组ar中复制n个数到sales（n<=4）
    //计算最大值，最小值，平均值
    //其余值置为0
    void setSales(Sales & s,const double ar[],int n);
    //交互式方法
    void setSales(Sales & s);
    void showSales(const Sales & s);
}
#endif //CHARPTER9_SALES_H
