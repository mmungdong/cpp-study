#include<iostream>

using namespace std;

int main()
{
    /*
        关键字 sizeof：
        作用： 统计类型数据所占内存大小
        语法： sizeof(数据类型/变量名)
    */
    short num1 = 1;
    cout << "short size is " << sizeof(short) << endl;
    cout << "num1 size is " << sizeof(num1) << endl;

    int num2 = 2;
    cout << "short size is " << sizeof(int) << endl;
    cout << "num1 size is " << sizeof(num2) << endl;

    long num3 = 3;
    cout << "short size is " << sizeof(long) << endl;
    cout << "num1 size is " << sizeof(num3) << endl;

    long long num4 = 4;
    cout << "long long size is " << sizeof(long long) << endl;
    cout << "num1 size is " << sizeof(num4) << endl;

    system("pause");

    return 0;
}
