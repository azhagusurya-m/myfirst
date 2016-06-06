#include <stdio.h>

int main(void) {
int copy_num=0,count=0;
printf("enter the number\n");
scanf("%d",&copy_num);
   while(copy_num)
   	{
   		copy_num=copy_num/10;
   	       count++;	
   	}
   	printf("number of digits is %d ",count);
      
	return 0;
}
