//
// Created by ��˶ on 13/7/2022.
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
    //������ar�и���n������sales��n<=4��
    //�������ֵ����Сֵ��ƽ��ֵ
    //����ֵ��Ϊ0
    void setSales(Sales & s,const double ar[],int n);
    //����ʽ����
    void setSales(Sales & s);
    void showSales(const Sales & s);
}
#endif //CHARPTER9_SALES_H
