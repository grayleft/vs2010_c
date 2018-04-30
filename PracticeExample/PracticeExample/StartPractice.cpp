#include <stdio.h>
#include <stdlib.h>
#include "conditional.h"

int max(int , int);

int main()
{
	int GetNumber=0;
	int i=0;
	printf("Start!\n");
	//hello();
	//GetNumber=getchar();
    scanf("%d",&GetNumber);
	printf("GetNumber: %d\n",GetNumber);

	(GetNumber%2==0)?printf("EvenNumber\n"):printf("OddNumber\n");
    //JudgeOddOrEvenNumber£¨GetNumber£©;

	for(i=0;i<10;i++)
	{
		printf("The i number : %d\n",i);
	}

	printf("max is %d\n",max(19,316));

	system("pause");
	return 0;
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