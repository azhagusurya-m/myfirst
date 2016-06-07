
#include <stdio.h>
int main(void) {
int num1,num2,num3;
scanf("%d %d %d",&num1,&num2,&num3);
     printf("%d is the greatest numbers among  %d %d %d ",(num1>num2)?((num1>num3)?num1:num3):(num2>num3)?num2:num3,num1,num2,num3);
	return 0;
}
