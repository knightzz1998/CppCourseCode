// 关键字宏定义
#ifdef MYDLL_EXPORTS // MYDLL_EXPORTS 这个不能随便改, 否则会无法识别
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif

// 从 MyDLL.dll 导出
// 导出一个类
class MYDLL_API CMyDll {

public:
	CMyDll(void);
	// TODO : 添加需要导出的方法
	int add(int a, int b);
};

// 导出一个整型变量
extern MYDLL_API int nMyDll;
// 导出一个函数
MYDLL_API int fnMyDll(void);