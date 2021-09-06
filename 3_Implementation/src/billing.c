#include<stdio.h>
#include "fun.h"
void billing(){
		 char n[20];
		 int j=0;
	  printf("enter customer name:");
	   fflush(stdin);
	 scanf("%s",n);
	  for(j=0;j<100;j++)
	  {
	  if(strcmp(c[j].name,n)==0)
	   {
	    if(strcmp(a[j].roomtype,"delux")==0)
	    {
	     if(strcmp(a[j].foodtype,"non_veg")==0)
	     {
	      b[j].bill=(1500+900)*c[j].period;
	      printf("-----------------------------\n");
	      printf("name:%s,room.no:%d\n",c[j].name,a[j].roomno);
	      printf("-----------------------------\n");
	      printf("No of days stayed %d\n",c[j].period);
	      printf("%s                     rs1500\n",a[j].roomtype);
	      printf("%s                     rs 900\n",a[j].foodtype);
	      printf("\n");
	      printf("total bill=rs %d\n",b[j].bill);
	      printf("thankyou*\n");
	     }
	     else
	     {
	      b[j].bill=(1500+400)*c[j].period;
	      printf("-----------------------------\n");
	      printf("name:%s,room.no:%d\n",c[j].name,a[j].roomno);
	      printf("-----------------------------\n");
	      printf("No of days stayed %d\n",c[j].period);
	      printf("%s                     rs1500\n",a[j].roomtype);
	      printf("%s                     rs 400\n",a[j].foodtype);
	      printf("\n");
	      printf("total bill=rs %d\n",b[j].bill);
	      printf("thankyou*\n");
	    }
	    }
	    else if(strcmp(a[j].roomtype,"AC")==0)
	    {
	     if(strcmp(a[j].foodtype,"non_veg")==0)
	     {
	      b[j].bill=(1000+900)*c[j].period;
	      printf("-----------------------------\n");
	      printf("name:%s,room.no:%d\n",c[j].name,a[j].roomno);
	      printf("-----------------------------\n");
	      printf("No of days stayed %d\n",c[j].period);
	      printf("%s                      rs1000\n",a[j].roomtype);
	      printf("%s                      rs 900\n",a[j].foodtype);
	      printf("\n");
	      printf("total bill=rs %d\n",b[j].bill);
	      printf("thankyou*\n");
	      }
	     else
	     {
	      b[j].bill=(1000+400)*c[j].period;
	      printf("-----------------------------\n");
	      printf("name:%s,room.no:%d\n",c[j].name,a[j].roomno);
	      printf("-----------------------------\n");
	      printf("No of days stayed %d\n",c[j].period);
	      printf("%s                      rs1000\n",a[j].roomtype);
	      printf("%s                      rs 400\n",a[j].foodtype);
	      printf("\n");
	      printf("total bill=rs %d\n",b[j].bill);
	      printf("thankyou*\n");
	      }
	     }
	    else
	    {
	     if(strcmp(a[j].foodtype,"non_veg")==0)
	     {
	      b[j].bill=(500+900)*c[j].period;
	      printf("-----------------------------\n");
	      printf("name:%s,room.no:%d\n",c[j].name,a[j].roomno);
	      printf("-----------------------------\n");
	      printf("No of days stayed %d\n",c[j].period);
	      printf("%s                      rs500\n",a[j].roomtype);
	      printf("%s                      rs900\n",a[j].foodtype);
	      printf("\n");
	      printf("total bill=rs %d\n",b[j].bill);
	      printf("thankyou*\n");
	     }
	     else
	     {
	      b[j].bill=(500+400)*c[j].period;
	      printf("-----------------------------\n");
	      printf("name:%s,room.no:%d\n",c[j].name,a[j].roomno);
	      printf("-----------------------------\n");
	      printf("No of days stayed %d\n",c[j].period);
	      printf("%s                      rs500\n",a[j].roomtype);
	      printf("%s                      rs400\n",a[j].foodtype);
	      printf("\n");
	      printf("total bill=rs %d\n",b[j].bill);
	      printf("thankyou*\n");
	     }
	    }
	   }
	}
}

	
