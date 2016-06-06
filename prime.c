#include <stdio.h>
int main(void) {
	int n;
	int i,flag=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			 flag=1;
			 break;
		}
	}
   	printf("%d is %s",n,(flag==1)?"not a prime":"prime");
		return 0;
}
