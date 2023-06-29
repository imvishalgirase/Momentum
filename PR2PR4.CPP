#include<stdio.h>
#include<conio.h>
void main()
{
      char dn;//dn=Day Name
      clrscr();
      printf("Enter the first letter of the day=");
      scanf("%c",&dn );
      switch(dn)
     {
      case   'M':
	 printf("The day is Monday \n",dn);
	 break;

	case 'T':
	 printf("The day is Tuesday \n",dn);
	 break;

	 case 'W':
	 printf("The day is Wednesday \n",dn);
	 break;

	  case 't':
	 printf("The day is Thersday \n",dn);
	 break;

	 case 'F':
	     printf("The day is Friday \n",dn);
	      break;

	 case 'S':
	 printf("The day is Saturday \n",dn);
	 break;

	   case 's':
	 printf("The day is Sunday \n",dn);
	 break;
	 default :
	 printf(" Please enter a valid cahracter \n");
	 break;
	}
	     getch();
	     }


