//
// Created by »ªË¶ on 13/7/2022.
//
#include <iostream>

using namespace std;

const int arSize = 10;
void strcount(const char * str);

int main()
{
    char input[arSize];
    char next;

    cout<<"Enter a line"<<endl;
    cin.get(input,arSize);
    while (cin)
    {
        cin.get(next);
        while (next!='\n')
            cin.get(next);
        strcount(input);
        cout<<"Enter next line (Empty line to quit):"<<endl;
        cin.get(input,arSize);
    }
    cout<<"bye!"<<endl;
    return 0;
}

void strcount(const char * str)
{
    static int total = 0;
    int count = 0;

    cout<<"\""<<str<<"\" contains"<<endl;
    while(*str++)
    {
        count++;
        total += count;
        cout<<count<<"characters"<<endl;
        cout<<total<<"characters total"<<endl;
    }
}