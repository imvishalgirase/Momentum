#include<stdio.h>
#include<conio.h>

main()
{   
    clrscr();
   int a,b ,c ,d;
   printf("enter value of a :");
   scanf("%d",&a);
   printf("enter value of b :");
   scanf("%d",&b);
   printf("enter value of c :");
   scanf("%d",&c);
   printf("enter value of d :");
   scanf("%d",&d);
  //int a=200,b=150,c=240,d=2000;
   if(a>b)
   {
     if(a>c)
     {
       if(a>d)
       {
	 printf("%d is Max",a);
       }
       else
       {
	 printf("%d is Max",d);
       }
     }
     else
     {
       if(c>d)
       {
	 printf("%d is Max",c);
       }
       else
       {
	 printf("%d is Max",d);
       }

     }

   }
   else
   {
      if(b>c)
      {
	 if(b>d)
	 {
	    printf("%d is Max",b);
	 }
	 else
	 {
	    printf("%d is Max",c);
	 }
      }
      else
      {
	 if(c>d)
	 {
	   printf("%d is Max",c);
	 }
	 else
	 {
	   printf("%d is Max",d);
	 }
      }
   }


   getch();

}
