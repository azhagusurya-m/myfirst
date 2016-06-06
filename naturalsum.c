#include <stdio.h>
int main(void) {
float num,sum=0;
int n,i;
scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	scanf("%f",&num);
  	sum+=num;
  }
 printf("%f",sum);
	 return 0;
}
