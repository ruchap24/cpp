#include<iostream>
using namespace std;
int main()
{
    enum gender{
        male,female,others
    };
    cout<<male<<endl;
    gender str=others;
    cout<<str;
    return 0;
}