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
			if ((i - 2) % 6 == 0)
				cout << 'X';
			else
				if ((i - 4) % 6 == 0)
				{
					cout << 'Y';
				}
				else
					if (i % 3 == 0)
					{
						int temp = i / 3;
						while (temp % 2 == 0)
						{
							temp = temp / 2;
						}
						if ((temp / 2) % 2 == 0)
						{
							cout << "+";
						}
						else
						{
							cout << "-";
						}
					}
					else
					{
						cout << "F";
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