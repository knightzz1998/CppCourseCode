// ����DLL�еĵ�������

// #include "pch.h" // Ԥ����ͷ�ļ�, ֮ǰ�汾���� stdafx.h , ���� => �������� => C++ => Ԥ����ͷ
#include "MyDll.h"

// ���嵼������
MYDLL_API int nMyDll = 10;

// ���嵼������
MYDLL_API int fnMyDll(void) {
	return 10;
}

// �����ѵ�����Ĺ��캯��
CMyDll::CMyDll() {
	return;
}

// ������ʵ��
int CMyDll::add(int a, int b) {
	return (a + b);
}