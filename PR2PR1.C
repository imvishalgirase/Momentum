#include<stdio.h>
#include<conio.h>
void main()
{

	  char ch;
	  clrscr();
	  printf("Enter the value =");
	  scanf("%c",&ch);
	  if(ch>='0'  && ch<='9')
	  {
	   printf( "value is numeric",ch);
	   }
	   else if(ch>='a'  && ch<='z')
	   {
	    printf(" value is small alphabet",ch);
	    }
	    else if(ch>='A'  && ch<='Z')

	    {
	      printf( "value is capi alphabet",ch);
	      }
	      else
	      {
		printf("Enter spesial character");
		}
		getch();
		}