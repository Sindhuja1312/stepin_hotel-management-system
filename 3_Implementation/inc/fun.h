#ifndef __FUN_H__
#define __FUN_H__

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

#endif  /* __FUN_H__  */
