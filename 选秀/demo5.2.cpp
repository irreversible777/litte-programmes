// demo5.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{

	bool once=true; //为了第一次不执行是否继续
	while (true)
	{
		if (once == false) {   
			cout << "选秀是否继续！(1-是，0-否)\n"; 
			bool exit; cin >> exit;
				if (exit == false)break;     //是否继续
		}
		    once = false;
		{
			cout << "颜值是否好(1-好,0-不好):";
			bool i;cin >> i;
			if (i == true) {
				cout << "晋级" << endl; continue;
			}
				cout << "身材是否行(a-行,b-不行):";
				char y;cin >> y;
				if (y == 'a')
				{
					cout << "晋级" << endl;
					continue;
				}
				{
					cout << "淘汰!" << endl;
					continue;
				}
		}
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
