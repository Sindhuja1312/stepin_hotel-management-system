#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void welcome(); 
void features();
void avail();
void customer_details();
void room_alloc();
void room_dealloc();
void billing();

struct customer
{
  char name[20];
  char address[50];
  char phno[10];
  int period;
}c[100];
struct allocdealloc
{
 char name[20];
 int roomno;
 char roomtype[20];
 char foodtype[20];
 int year;
 int month;
 int day;
 int hour;
 int minute;
 }a[100];
struct billing
{
 int bill;
 }b[100];
void main()
{
 printf("Welcome to Shilla seoul Hotel\n it is a reputed hotel with all first class facilities\n It won the best hotel of the year in 2020 \n It was started by a company called seoulhotels.in \n you can book online room by going to link www.koreahotels.in \n");
 welcome();

}
 void welcome(void){
  int n1;
  printf("-------------------------\n");
  printf("MAIN MENU\n");
  printf("-------------------------\n");
  printf("1.Features of room\n2.Avalibility\n3.Custumer details\n4.Room allocation\n5.Room deallocation\n6.billing\n7.exit\n");
  printf("-------------------------\n");
  printf("enter your choice:");
  scanf("%d",&n1);
  switch(n1)
  {
   case 1:
    features();
	welcome();
   break;
   case 2:
    avail();
	welcome();
   break;
   case 3:
    customer_details();
	welcome();
   break;
   case 4:
   room_alloc();
   welcome();
    break;
	case 5:
	room_dealloc();
	welcome();
	break;
	case 6:
	billing();
	welcome();
	break;
	case 7:
       if(n1<=7){ 
		exit(0);
	}

  }
 }
