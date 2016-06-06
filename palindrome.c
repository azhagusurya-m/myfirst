#include <stdio.h>
#include <math.h>
int main(void) {
    int num,i=0,n,p;
    scanf("%d",&num);
    int cnum=num;
    int rev=0,mod;
    while(num)
    {
    mod=num%10;
    num=num/10;
      rev=rev*10+mod;
    }
    
     if(cnum==rev)
      printf("palindrome");
      else
       printf("not a palindrome");
       return 0;
}
