#include <stdio.h>
#include <math.h>
int main(void) {
    int num,i=0,n;
    scanf("%d",&num);
    int cnum=num;
    int armstrong=0,mod,count=0;
    while(num)                        //count the number of digits in a given number.
    {
    mod=num%10;
    num=num/10;
      count++;
    }
        num=cnum;
    
     while(num)
    {
    mod=num%10;
     num=num/10;
      armstrong+=pow(mod,count);
    }
     if(cnum==armstrong)
       printf("armstrong");
      else
       printf("not a armstrong");
       return 0;
}
