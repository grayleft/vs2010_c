#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conditional.h"

int max(int , int);
void PrintfArgument(char , char);
void practice10(int,int);
void practice_array();
void practice_pointer();
void use_pointer();
int max_01(int ,int );
void pointer_variable();
void huidiao_func();
void string1();
void string2();
int main(int argc,char *argv[])
{
	int GetNumber=0;
	int i=0;
	printf("Start!\n");
	string2();
	//practice10(3,7);
	//hello();
	//GetNumber=getchar();
    //scanf("%d",&GetNumber);
	//printf("GetNumber: %d\n",GetNumber);

	//(GetNumber%2==0)?printf("EvenNumber\n"):printf("OddNumber\n");
    //JudgeOddOrEvenNumber（GetNumber）;

	//for(i=0;i<10;i++)
	//{
	//	printf("The i number : %d\n",i);
	//}

	//printf("max is %d\n",max(19,316));

	system("pause");
	return 0;
}

void PrintfArgument(char string1,char string2)
{
	printf("Program Name : %s\n",string1);
	printf("Argument First is %s\n",string2);
}

int max(int num1,int num2)
{
	int result=0;

	if(num1<num2)
		result=num2;
	else
		result=num1;

	return result;
}

int max_01(int num1,int num2)
{
	return num1>num2?num1:num2;
}
void practice10(int i,int j)
{	
	int ascii1=1;
	int itime,jtime;
	printf("i: %d\t j: %d\n",i,j);
	printf("%c\t%c\n",ascii1,ascii1);
	for(itime=0;itime<i;itime++)
	{
		for(jtime=0;jtime<=itime;jtime++)
		{
			printf("1\t");
		}
		printf("\n");
	}
}

void practice_array()
{
	int ai=10;
	int array1[10];

	for(int itime=0;itime<10;itime++)
	{
		array1[itime]=itime+10;
	}

	for(int itime=0;itime<10;itime++)
	{
		printf("array1[%d] : %d\n",itime,array1[itime]);
	}

}

void practice_pointer()
{
	int a1=10;
	int a2[10];
	printf("a1'pointer:%p\na2'pointer:%p\n",&a1,&a2);
}

void use_pointer()
{
	int a1=10;
	int *a2;
	a2=&a1;

	printf("The address of a1 variable: %p\n",&a1);

	printf("The address stored in a2 variable: %p\n",a2);

	printf("Value of *a2 variable:%d\n",*a2);
}

void pointer_variable()
{
	int (*p)(int ,int ) = &max_01;
	int a,b,c,d;

	printf("Please write three number.");
	scanf("%d %d %d",&a,&b,&c);

	d=p(p(a,b),c);

	printf("最大的数字是：%d\n",d);

}

void populate_array(int *array,size_t arraySize,int (*getNextValue)(void))
{
	for(size_t i=0;i<arraySize;i++)
	{
		array[i]=getNextValue();
	}
}

int getNextRandomValue(void)
{
	return rand();
}

void huidiao_func()
{
	int marray[10];
		for(int itime=0;itime<10;itime++)
	{
		printf("%d\t",marray[itime]);
	}
	printf("\n");
	populate_array(marray,10,getNextRandomValue);
	for(int itime=0;itime<10;itime++)
	{
		printf("%d\t",marray[itime]);
	}
	printf("\n");

}

void string1()
{
	char s1[6]={'H','e','l','l','o','\0'};

	printf("s1 message: %s\n",s1);


}

void string2()
{
	char str1[12]="Hello";
	char str2[12]="World";
	char str3[12];
	int len=0;

	printf("STR1:%s\t STR2:%s\t STR3：%s\n",str1,str2,str3);
	strcpy(str3,str1);
	printf("strcpy(str3,str1): %s\n",str3);

	strcat( str1, str2);
	printf("strcat(str1,str2): %s\n",str1);

	len=strlen(str1);
	printf("strlen(str1): %d\n",len);

}