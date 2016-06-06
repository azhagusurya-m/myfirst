#include <stdio.h>

int main(void) {
float num,sum=0;
int n,i;
printf("enter the number of natural numbers to be added\n");
scanf("%d",&n);
printf("enter the natural numbers\n");
  for(i=0;i<n;i++)
  {
  	scanf("%f",&num);
  	sum+=num;
  }
  
printf(" sum:%f",sum);
	return 0;
}
