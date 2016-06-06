#include <stdio.h>
 int main(void) {
  int sum=0,n,i;
   printf("enter the number\n");
    scanf("%d",&n);
     for(i=0;i<=n;i++)
     	sum+=i;
      printf(" sum:%d",sum);
	return 0;
}
