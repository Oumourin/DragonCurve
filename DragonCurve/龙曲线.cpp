/*
	�㷨��ơ���������
	���뻷��VS2017
*/
#include<iostream>
#include<string>
#include<time.h>

using namespace std;

bool creatDragon()
{
	cout << "������Ե���������";
	int testNum;
	cin >> testNum;
	for (int i = 0; i < testNum; i++)
	{
		cout << "������������������ʼ���ꡢ��������" << endl;
		int dragonGeneration = 0, startChar = 0, outNum = 0;
		cin >> dragonGeneration >> startChar >> outNum;

		cout << "���Ϊ��" << endl;
		for (int i = startChar; i < startChar + outNum; i++)
		{
			if ((i - 2) % 6 == 0)					//�������߽�������һ���֣�ͬʱ��ÿ��С���еڶ���λ�õġ�X����������
				cout << 'X';
			else
				if ((i - 4) % 6 == 0)				//��ÿ��С��ĵ��ĸ�λ�õġ�Y����������
				{
					cout << 'Y';
				}
				else
					if (i % 3 == 0)					//ȷ������λ
					{
						int temp = i / 3;			//ֻ�Է���λ��������
						while (temp % 2 == 0)		//���۷���λΪż�����
						{
							temp = temp / 2;		//��ż���ķ���λ�������ƣ�ֱ�����ɸ÷��ŵĴ���Ϊֹ
						}
						if ((temp + 1) % 4 == 0)	//Ϊ�˸�����⣬���ü�һ��ģ���������ж�����λ����ż��λ
						{
							cout << "-";			//ż��λ��䡮-��
						}
						else
						{
							cout << "+";			//����λ���'+'
						}
					}
					else
					{
						cout << "F";				//=���ڿ�λ�����F
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
	cout << "��������ʱ��Ϊ��" << endTime - startTime << "Ms" << endl;
	system("pause");
	return 0;
}