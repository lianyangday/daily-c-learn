#include"stack.h"


//ջ�ĳ�ʼ��
stack::stack()
{
	//��ʼ��
	arr = nullptr;
	size = 0;
	capacity = 0;
}

//ջ�Ĳ���
void stack::push(datatype x)
{
	//�жϿռ��Ƿ�
	if (size == capacity)
	{
		int newcapity = capacity == 0 ? 4 : 2 * capacity;
		datatype* newarr = (datatype*)realloc(arr, sizeof(datatype) * newcapity);
		if (newarr == nullptr)
		{
			perror("stack::push::malloc");
			exit(1);
		}
		arr = newarr;
		capacity = newcapity;

	}

	//�ռ��㹻ֱ�Ӳ���
	arr[size] = x;
	size++;
}

//ջ��ɾ��
void stack::pop()
{
	size--;
}

//ջ��Ԫ��
datatype stack::top()
{
	return arr[size - 1];
}

//ջ��Ԫ������
int stack::num()
{
	return size;
}

//ջ������
stack::~stack()
{
	free(arr);
	arr = nullptr;
	size = 0;
	capacity = 0;
}

