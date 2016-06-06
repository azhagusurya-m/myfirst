#include <stdio.h>
int main(void) {
	int num1,num2;
	int i,flag=0,j;
	scanf("%d %d",&num1,&num2);
	for(j=num1;j<num2;j++)
	{
	for(i=2;i<=j/2;i++)
	{
		if(j%i==0)
		{
			 flag=1;
			 break;
		}
	}
	if(flag!=1)
	   	printf("%d\t",j);
	   	flag=0;
	   	
	}
		return 0;
}
