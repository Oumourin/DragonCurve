/*
	算法设计……龙曲线
	编译环境VS2017
*/
#include<iostream>
#include<string>
#include<time.h>

using namespace std;

bool creatDragon()
{
	cout << "输入测试的数据量：";
	int testNum;
	cin >> testNum;
	for (int i = 0; i < testNum; i++)
	{
		cout << "输入龙曲线世代、开始坐标、结束坐标" << endl;
		int dragonGeneration = 0, startChar = 0, outNum = 0;
		cin >> dragonGeneration >> startChar >> outNum;

		cout << "结果为：" << endl;
		for (int i = startChar; i < startChar + outNum; i++)
		{
			if ((i - 2) % 6 == 0)					//对龙曲线进行六个一划分，同时对每个小块中第二个位置的‘X’进行生成
				cout << 'X';
			else
				if ((i - 4) % 6 == 0)				//对每个小块的第四个位置的‘Y’进行生成
				{
					cout << 'Y';
				}
				else
					if (i % 3 == 0)					//确定符号位
					{
						int temp = i / 3;			//只对符号位进行讨论
						while (temp % 2 == 0)		//讨论符号位为偶数情况
						{
							temp = temp / 2;		//对偶数的符号位进行逆推，直到生成该符号的代数为止
						}
						if ((temp + 1) % 4 == 0)	//为了更好理解，采用加一后模四运算来判断奇数位还是偶数位
						{
							cout << "-";			//偶数位填充‘-’
						}
						else
						{
							cout << "+";			//奇数位填充'+'
						}
					}
					else
					{
						cout << "F";				//=对于空位置填充F
					}
		}
		cout << endl;
	}

	return true;
}

int main()
{
	time_t startTime, endTime;
	startTime = clock();
	creatDragon();
	endTime = clock();
	cout << "程序运行时间为：" << endTime - startTime << "Ms" << endl;
	system("pause");
	return 0;
}