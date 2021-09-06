#include<stdio.h>
#include "fun.h"
void customer_details(){
		int i=0,n2;
		do{ 
       printf("--------------------------\n");
       printf("CUSTOMER DETAILS\n");
       printf("--------------------------\n");
       printf("1.Enter custmer details\n2.View customer details\n3.Exit to main menu\n");
       printf("--------------------------\n");
       printf("enter your choice:");
       scanf("%d",&n2);
       switch(n2)
       {
	case 1:
	 {
	  printf("enter name:\n");
	fflush(stdin);
	  scanf("%s",c[i].name);
	  printf("enter address:\n");
	fflush(stdin);
	  scanf("%s",c[i].address);
	   printf("enter phone number:\n");
    fflush(stdin);
	 scanf("%s",c[i].phno);
       printf("enter period of stay in days:\n");
	  scanf("%d",&c[i].period);
	  i=i+1;
	  }
	  break;
	case 2:
	  {
		  int y=0,j=0;
		  char n[20];
	    printf("enter the name of customer:\n");
	    fflush(stdin);
	    scanf("%s",n);
	    for(j=0;j<100;j++)
	    {
	     if(strcmp(c[j].name,n)==0)
	     {
			  y=y+1;
	       printf("-------------------\n");
	       printf("detail of ");
	       puts(c[j].name);
	       printf("--------------------\n");
	       printf("Address:");
	       puts(c[j].address);
		 printf("phone number:");
	       puts(c[j].phno);
	       printf("period of stay %d days\n",c[j].period);
		 }

}
		   if(y!=1)
		   {
			    printf("No Details");
		   }

	    }

	   break;

	   }
	   }
	   while(n2<=2);
	   }
