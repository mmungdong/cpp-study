#include<iostream>

using namespace std;

/*
    常量定义有两种方式：
    1. #define 定义的宏常量
    2. const 修饰的变量
*/

// 1. #define 定义的宏常量, 注意这里后面是没有“；”的
#define week 7

int main()
{
    cout << "what days in one week? " << week << endl;

    // 2. const 修饰的变量
    const int month = 30;
    cout << "what days in one month? " << month << endl;
    
    system("pause");
    return 0;
}
