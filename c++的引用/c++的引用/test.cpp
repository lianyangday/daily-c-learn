
#include<iostream>
using namespace std;

//ȱʡ��������������ȱʡ��������ʾ����
//int sum1(int a = 1, int b)
//{
//	return a + b;
//}

//ȱʡ��������������ȱʡ��
int sum2(int a, int b=1)
{
	return a + b;
}
float operation(double a, double b)
{
	return a + b;
}

int operation(int a, int b)
{
	return a + b;
}



int main()
{
	//���ִ�������ȱʡ�ĺ���������ʵ���Ͼͺ�û��ȱʡ�ĺ�����һ����
	/*int num = sum1(1);*/
	/*int num = sum2(1);
	cout << num << endl;*/

	//��������
	/*cout << operation(1, 1) << endl;*/
	cout << operation(1.12,1.12) << endl;


	//����
	int a = 1;
	//�����ֻ��ֵ�ĸ��ƣ�����һ������������
	int* pp = &a;
	int*&  b = pp;

	//һЩ����������ʱ��������ʱ�����ʱ������Ȩ�޾ͷǳ���Ҫ
	int* const& c = &a;

	const int x = 1;
	const int& ppp = x;

	const int* p = &x;

	//auto�ؼ���
	auto q = 1;
	auto w = &q;
	auto* e = &q;

	//���ٴ�ӡ�����е�Ԫ��
	int arr[] = { 1,2,3,4,5,6 };
	for (auto a : arr)
	{
		cout << a << " ";
	}
	cout << endl;
	for (auto& a : arr)
	{
		a = a + 1;
	}
	cout << endl;
	for (auto a : arr)
	{
		cout << a << " ";
	}

	return 0;
}