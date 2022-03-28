#include<stdio.h>

int main()
{
	char ch;

	printf("Enter a character to check :: ");
	scanf("%c",&ch);

	switch(ch)
  	{
  		case 'a':
         		printf("\nThe entered character %c is a vowel",ch);
         		break;
 		 case 'e':
         		printf("\nThe entered character %c is a vowel",ch);
         		break;
  		case 'i':
         		printf("\nThe entered character %c is a vowel",ch);
         		break;
  		case 'o':
         		printf("\nThe entered character %c is a vowel",ch);
        		 break;
  		case 'u':
         		printf("\nThe entered character %c is a vowel",ch);
         		break;
		case 'A':
                        printf("\nThe entered character %c is a vowel",ch);
                        break;
                 case 'E':
                        printf("\nThe entered character %c is a vowel",ch);
                        break;
                case 'I':
                        printf("\nThe entered character %c is a vowel",ch);
                        break;
                case 'O':
                        printf("\nThe entered character %c is a vowel",ch);
                         break;
                case 'U':
                        printf("\nThe entered character %c is a vowel",ch);
                        break;
  		default:
         		printf("\nThe entered character %c is a consonant",ch);
  	}

 	 return 0;
}
