// �ؼ��ֺ궨��
#ifdef MYDLL_EXPORTS // MYDLL_EXPORTS �����������, ������޷�ʶ��
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif

// �� MyDLL.dll ����
// ����һ����
class MYDLL_API CMyDll {

public:
	CMyDll(void);
	// TODO : �����Ҫ�����ķ���
	int add(int a, int b);
};

// ����һ�����ͱ���
extern MYDLL_API int nMyDll;
// ����һ������
MYDLL_API int fnMyDll(void);