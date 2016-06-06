#include <stdio.h>
int main(void) {
char input;
 scanf("%c",&input);
    if((input>='A'&&input<='Z')||(input>='a'&&input<='z'))
       printf("entered cahracter is an alphabet");
     else
         printf("entered character is a consonant");
  	return 0;
}
