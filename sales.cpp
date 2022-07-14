//
// Created by 华硕 on 13/7/2022.
//
#include "sales.h"
#include <iostream>

namespace SALES
{
    using std::cout;
    using std::cin;
    using std::endl;

    void setSales(Sales & s,const double ar[],int n)
    {
        double sum = 0;
        if(n<=4)
        {
            //将数组中的数复制到sales中
            for(int i = 0; i < n ; i++ )
            {
                s.sales[i] = ar[i];
            }
            //排序，找出最大值和最小值
            for(int i = 0; i < n - 1 ; i++ )
            {
                for(int j = 0; j < n - i - 1 ; j++)
                {
                    if(s.sales[j]>s.sales[j+1])
                    {
                        double temp = s.sales[j];
                        s.sales[j] = s.sales[j+1];
                        s.sales[j+1] = temp;
                    }
                }
            }
            s.max = s.sales[n - 1];
            s.min = s.sales[0];
            for (int i = 0; i < n; ++i) {
                 sum += s.sales[i];
            }
            s.average = sum/n;
        }
        else{
            for(int i = 0; i < 4 ; i++)
            {
                s.sales[i] = ar[i];
            }
            for(int i = 0; i < 4 - 1 ; i++ )
            {
                for(int j = 0; j < 4 - i - 1 ; j++)
                {
                    if(s.sales[j]>s.sales[j+1])
                    {
                        double temp = s.sales[j];
                        s.sales[j] = s.sales[j+1];
                        s.sales[j+1] = temp;
                    }
                }
            }
            s.max = s.sales[4];
            s.min = s.sales[0];
            for (int i = 0; i < 4; ++i) {
                sum += s.sales[i];
            }
            s.average = sum/4;
        }
    }
    void setSales(Sales & s)
    {
        cout<<"please input 4 sales:"<<endl;
        for (int i = 0; i < 4; ++i) {
            cin>>s.sales[i];
        }
        for(int i = 0; i < 4 - 1 ; i++ )
        {
            for(int j = 0; j < 4 - i - 1 ; j++)
            {
                if(s.sales[j]>s.sales[j+1])
                {
                    double temp = s.sales[j];
                    s.sales[j] = s.sales[j+1];
                    s.sales[j+1] = temp;
                }
            }
        }
        double sum = 0;
        s.max = s.sales[3];
        s.min = s.sales[0];
        for (int i = 0; i < 4; ++i) {
            sum += s.sales[i];
        }
        s.average = sum/4;
    }
    void showSales(const Sales & s)
    {
        int len = sizeof (s.sales)/sizeof (double);
        cout<<"The all sales : "<<endl;
        for (int i = 0; i < len; ++i) {
            cout<<s.sales[i]<<" ";
        }
        cout<<endl;
        cout<<"Maximum of the sales :"<<s.max<<endl;
        cout<<"Minimum of the sales :"<<s.min<<endl;
        cout<<"Average of the sales :"<<s.average<<endl;
    }
}