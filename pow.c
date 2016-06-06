#include <stdio.h>
int main(void) {
	float m;
	int pow;
	scanf("%f %d",&m,&pow);
	for(int i=1;i<pow;i++)
			m*=m;
		printf("%.0f",m);
	
	
	return 0;
}
