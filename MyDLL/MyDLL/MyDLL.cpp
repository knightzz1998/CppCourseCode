// 定义DLL中的导出函数

// #include "pch.h" // 预编译头文件, 之前版本的是 stdafx.h , 属性 => 配置属性 => C++ => 预编译头
#include "MyDll.h"

// 定义导出变量
MYDLL_API int nMyDll = 10;

// 定义导出函数
MYDLL_API int fnMyDll(void) {
	return 10;
}

// 定义已导出类的构造函数
CMyDll::CMyDll() {
	return;
}

// 定义类实现
int CMyDll::add(int a, int b) {
	return (a + b);
}