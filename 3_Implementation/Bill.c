#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include"MainBill.h"

void details()
{
    printf("Enter your location:\n");
	scanf("%s", B.location);
	printf("Enter your name:\n");
	scanf("%s", B.valid_name);
	printf("Enter the Meter Number:\n");
	scanf("%d", &B.mtr_num);
    printf("Enter the number of units consumed:\n");
	scanf("%d", &B.num_of_units_consumed);
    printf("Enter email ID :\n");
    scanf("%s", B.email_id);
    printf("Enter your address :\n");
    scanf("%s", B.add_details);
    printf("Enter the mobile number : \n");
    scanf("%s", B.mobile_number);
}

void city()
{
    int amt=0;
    B.num_of_units_consumed;
    if(B.num_of_units_consumed <=30 && B.num_of_units_consumed >= 0)
    {
        amt = B.num_of_units_consumed * 3.95; 
    }
    else if(B.num_of_units_consumed >= 31 && B.num_of_units_consumed <= 100)
    {
        amt = B.num_of_units_consumed * 5.45;
    }
    else if(B.num_of_units_consumed >= 101 && B.num_of_units_consumed <= 200)
    {
        amt = B.num_of_units_consumed * 7.00;
    }
    else
    {
        amt = B.num_of_units_consumed * 8.05;
    }

    printf("Electricity Bill\n\n");
    printf("Name : %s\n", B.valid_name);
    printf("In city, your electricity bill is: %d\n", amt);
    printf("Units consumed per month: %d\n", B.num_of_units_consumed);
}

void village()
{
    int amt=0;
    B.num_of_units_consumed;
    if(B.num_of_units_consumed <=30 && B.num_of_units_consumed >= 0)
    {
        amt = B.num_of_units_consumed * 3.90; 
    }
    else if(B.num_of_units_consumed >= 31 && B.num_of_units_consumed <= 100)
    {
        amt = B.num_of_units_consumed * 5.15;
    }
    else if(B.num_of_units_consumed >= 101 && B.num_of_units_consumed <= 200)
    {
        amt = B.num_of_units_consumed * 6.70;
    }
    else
    {
        amt = B.num_of_units_consumed * 7.55;
    }
    printf("Electricity Bill\n\n");
    printf("Name : %s\n", B.valid_name);
    printf("In village, your electricity bill is: %d\n", amt);
    printf("Units consumed per month: %d\n", B.num_of_units_consumed);
}