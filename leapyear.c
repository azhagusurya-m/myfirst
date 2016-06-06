#include <stdio.h>
int main(void) {
  int leapyear;
   scanf("%d",&leapyear);
   printf("%d is ",leapyear);
     printf("%s",(leapyear%100==0)?((leapyear%4==0)?" a leap year":"not a leap year"):((leapyear%4==0)?" a leap year":"not a leap year"));
   return 0;
}
