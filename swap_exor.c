#include <stdio.h>
void swap(int *num1,int *num2)
{

	*num1^=*num2;
	*num2^=*num1;
	*num1^=*num2;
	
	return ;
}

int main(void) {
   int num1,num2; 
	scanf("%d %d",&num1,&num2);
		printf("before swapping: %d %d\n",num1,num2);
			swap(&num1, &num2);
				printf("after swapping: %d %d",num1,num2);


	return 0;
}
