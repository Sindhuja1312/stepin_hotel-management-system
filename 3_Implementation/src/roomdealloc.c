#include<stdio.h>
#include<time.h>
#include "fun.h"
void room_dealloc(){ 
	time_t t;   
		time(&t);
		char n[20];
		int count,j=0;
	 printf("enter name of customer:");
	fflush(stdin);
	 scanf("%s",n);
	 for(j=0;j<100;j++)
	 {
	 if(strcmp(c[j].name,n)==0)
	     {
	       printf("the room that is vacant:");
	       printf("%d\n",a[j].roomno);
	       printf("Date that customer is leaving at:\n");
	       printf("date:%s  %d days stayed\n",ctime(&t),c[j].period);
	       count=count+1;
	     }
	  }
	}
