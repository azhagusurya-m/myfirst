#include <stdio.h>
#include <math.h>
int sum_or_oddsum(int num1,int num2,int odd)
{
	int sum=0,i;
	for(i=num1;i<=num2;i++)
	{
		if(odd==1)
	   		{
	   			if(i%2!=0)
		      sum+=i;
	   		}
		      else 
		       sum+=i;
	}
	return sum;
}


int main(void) {
     printf("sum of numbers from 1 to 15: %d\n",sum_or_oddsum(1,15,0));
     printf("sum of odd numbers from 15 to 45: %d",sum_or_oddsum(15,45,1));
   
       return 0;
}
