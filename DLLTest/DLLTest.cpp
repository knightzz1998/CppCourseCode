// DLLTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include "MyDLL.h"

int main()
{
    cout << "Hello World!\n";
    int x = fnMyDll();
    cout << "x : " << x << endl;

    CMyDll myDll;
    int result = myDll.add(1, 2);
    cout << "result : " << result << endl;
}