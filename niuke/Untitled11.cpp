/*
�������������س������������һ�кó��־������ɿ��������������ڹ��� N ���ɿ�����20 > N >0���� �����������ÿ����Գ�һ����������ɿ����� ��������ÿ�춼���ɿ��������������ж����ֲ�ͬ�ĳ����ɿ����ķ����� ���磺 ���N=1����������1��ͳԵ���������1�ַ����� ���N=2�����������Ե�1���1�飬��2���1�飬Ҳ���Ե�1���2�飬����2�ַ����� ���N=3����������1����Գ�1�飬ʣ2�飬Ҳ���Ե�1���2��ʣ1�飬������������2+1=3�ַ����� ���N=4�����������Ե�1���1�飬ʣ3�飬Ҳ���Ե�1���2�飬ʣ2�飬����3+2=5�ַ����� ���ڸ���N������д��������������ɿ����ķ�����Ŀ��
��������:

����ֻ��1�У�������N��

�������:

�����ж���������ݣ�����ÿ�����ݣ�
���ֻ��1�У����������ɿ����ķ�������
*/ 
//
// 1��2��3��5��8��13 
#include <stdio.h>

int fun(int n)
{
	if(n==1)  return 1;    //���һ��һ��������� 
	if(n==2)  return 2;  
	return fun(n-1) + fun(n-2);   //��һ��ķ��� + ������ķ��� 
}


int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",fun(n));
	return 0;
 } 