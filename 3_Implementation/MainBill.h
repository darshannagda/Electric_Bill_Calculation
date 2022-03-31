#ifndef __MainBill_H__
#define __MainBill_H__

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

struct Bill
{
	char location[6];
	char valid_name[15];
	int mtr_num;
    int num_of_units_consumed;
	char email_id[15];
	char add_details[100];
	int mobile_number[10];
};

struct Bill B;
#endif