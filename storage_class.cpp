#include<iostream>
using namespace std;
int a;               //extern(global)
int main()
{
    int b;           //auto(local)
    static int c;    //static
    register int d;  //register

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}