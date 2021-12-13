// BinaryFileCode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "BinaryFileOperator.h"
using namespace std;
int main()
{
    // binaryFileToText("", "");
    int  num = 2; // 0010
    cout << (num << 2) << endl; // 0010 => 1000
    cout << (num >> 2) << endl; // 0010 => 1000

    num = 11; // 1011
    cout << (num << 4) << endl; // 1011 0000

    num = 71; // 0001 1011
    cout << (num >> 4) << endl; // 0000 1011

    // 017 => 16 + 7 = 23 
    // 019 => 16 + 9 = 25

    // 16进制左移(右移)4位 == 2进制左移(右移)1位


    // 11 71 19 (16进制)

    // 00 11 => 左移4位(等价于2进制左移1位) => 01 10
    // 00 71 => 右移4位(等价于2进制右移1位) => 00 07
    // 二者相加 => 0117(16进制) => 10进制 => 16^2 + 16^1 + 7 => 279
}

