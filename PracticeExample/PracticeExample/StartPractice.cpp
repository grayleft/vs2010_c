#include <stdio.h>
#include <stdlib.h>
#include "conditional.h"

int max(int , int);
void PrintfArgument(char , char);
void practice10(int,int);

int main(int argc,char *argv[])
{
	int GetNumber=0;
	int i=0;
	printf("Start!\n");
	practice10(3,7);
	//hello();
	//GetNumber=getchar();
    //scanf("%d",&GetNumber);
	//printf("GetNumber: %d\n",GetNumber);

	//(GetNumber%2==0)?printf("EvenNumber\n"):printf("OddNumber\n");
    //JudgeOddOrEvenNumber£¨GetNumber£©;

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