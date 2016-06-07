#include <stdio.h>
#include <math.h>
int main(void) {
    int num,i=0,n;
    scanf("%d",&num);
     int rev=0,mod;
    while(num)
    {
    mod=num%10;
    num=num/10;
      rev=rev*10+mod;
    }
    
       printf("%d",rev);
       return 0;
}
