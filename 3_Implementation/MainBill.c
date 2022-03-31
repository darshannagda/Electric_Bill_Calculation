#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "MainBill.h"
#include "Bill.h"
void details();
void city();
void village();
void main()
{ 
	details();
	int option;
	do
	{
		printf("Electricity Bill\n");
		printf("Enter your choice between 1 and 3:\n");
		printf("1. city\n");
		printf("2. village\n");
		printf("3. EXIT\n");
		printf("Enter your choice :\n");
		scanf("%d", &option);
		system("cls");
		switch (option)
		{
		case 1:
			city();
			break;
		case 2:
			village();
			break;
		default:
			printf("INVALID CHOICE!\n");
			printf("CHOOSE BETWEEN 1 and 2\n");
		}
		getch();
	} while (option != 3);
}