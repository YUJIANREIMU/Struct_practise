#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef struct stu {
	long int num;
	char name[10];
	float sub1;
	float sub2;
	float sub3;

}stu;
float aver(struct stu* b)
{
	float av;
	av = ((*b).sub1 + (*b).sub2 + (*b).sub3) / 3;
	return av;
}
void print(struct stu* b,float ave,int k)
{
	printf("%-9ld%-10s%-5.1f%-5.1f%-8.1f%-10.1f%-d\n", (*b).num, (*b).name, (*b).sub1, (*b).sub2, (*b).sub3, ave, k);
}
int main()
{
	stu s[5];
	int ra = 0;
	float arr[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%ld %s %f %f %f", &s[i].num, &s[i].name, &s[i].sub1, &s[i].sub2, &s[i].sub3);
	}
	printf("Number:  Name:        score:       Average£º  rank:\n");
	for (int j = 0; j < 5; j++)
	{
		arr[j] = aver(&s[j]);
	}
	for (int j = 0; j < 5; j++)
	{
		for (int j = 0; j < 4; j++)
		{
			float ax;
			if (arr[j] < arr[j + 1])
			{
				ax = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ax;
			}
		}
	}
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (aver(&s[j]) == arr[i])
				ra = i + 1;
		}
		print(&s[j], aver(&s[j]), ra);
	}
	
	return 0;
}