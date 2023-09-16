#include<iostream>

using namespace std;

int main()
{
    // 1. 短整型, 占用2个字节
    short a = 1;

    // 2. 整型, 占用4个字节
    int b = 2;

    // 3. 长整型, 占用【win 4】 【linuix 32位 4】 【linuix 64位 8】个字节
    long c = 3;

    // 4. 长长整型, 占用8个字节
    long long d = 4;

    return 0;
}
