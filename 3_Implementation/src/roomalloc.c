#include<stdio.h>
#include "fun.h"
void room_alloc(){
char n[20];
		int count,j=0;
	 printf("enter name of customer:");
	 fflush(stdin);
	 scanf("%s",n);
	 for(j=0;j<100;j++)
	 {
	 if(strcmp(c[j].name,n)==0)
	     {
	       printf("enter the room that is going to be allocated\n");
	       scanf("%d",&a[j].roomno);
	       printf("enter the date(dd:mm:yy) and time(hh:mm):");
	       scanf("%d%d%d%d%d",&a[j].day,&a[j].month,&a[j].year,&a[j].hour,&a[j].minute);	
		          count=count-1;
	       printf("--------------\n");
	       printf("ROOMS AVAILABLE\n");
	       printf("--------------\n");
	       printf("-delux\n-AC\n-Non_AC\n");
	       printf("enter room type in alphabets as mentioned above:");
	       fflush(stdin);
	       scanf("%s",a[j].roomtype);
	       printf("--------------\n");
	       printf("FOOD AVAILABLE\n");
	       printf("--------------\n");
	       printf("-non_veg\n-veg\n");
	       printf("please enter the food catagory in alphabet as above:");
	     fflush(stdin);
	       scanf("%s",a[j].foodtype);
	     }
	  }
	}
