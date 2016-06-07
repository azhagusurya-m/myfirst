
#include <stdio.h>
 int main(void) {
  int sum=0,n,i;
   printf("enter the number\n");
    scanf("%d",&n);
    printf("1\t");
     for(i=1;i<=n;i++)
     {
     	
     	sum+=i;
     	printf("%d\t",sum);
     }
	return 0;
}
