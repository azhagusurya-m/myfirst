#include <stdio.h>

int main(void) {
	
char input;
scanf("%c",&input);
 if((input>='A'&&input<='Z')||(input>='a'&&input<='z'))
 {
 	
    switch(input)
    {
    	case 'a':
    	case 'A':
    	case 'e':
      case 'E':
    	case 'i':
    	case 'I':
    	case 'o':
    	case 'O':
    	case 'u':
    	case 'U':
    	
    	        printf("entered cahracter is a vowel");
    	        break;
    	default:
    	        printf("entered character is a consonant");
    }
}
	return 0;
}
