#pragma once

#pragma once
#include<stdlib.h>
#include<iostream>


typedef int datatype;

//�ࡪ��ջ
class stack
{
public:
	//ջ�ĳ�ʼ��
	stack();
	//ջ�Ĳ���
	void push(datatype x);
	//ջ��ɾ��
	void pop();
	//ջ��Ԫ��
	datatype top();
	//ջ��Ԫ������
	int num();
	//ջ������
	~stack();

private:
	datatype* arr;
	int size;
	int capacity;
};

