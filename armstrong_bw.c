#include <stdio.h>
#include <math.h>
int main(void) {
    int num1,num2,i=0,num;
    scanf("%d %d",&num1,&num2);
       
        for(num=num1;num<num2;num++)
       {
       	 int armstrong=0,mod,count=0;
    	int cnum=num;
    
    while(num)
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
       printf("%d",cnum);
         }
       return 0;
}
