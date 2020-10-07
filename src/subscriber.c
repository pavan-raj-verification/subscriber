#include<stdio.h>
#include<curses.h>
#include<ctype.h>

#include<stdlib.h>
//added header file
#include"subscriber.h"


int main()
{	int password;
	int phonenumber;
	char choice;



	system("cls");

	printf("\n\n\n\n\n\n\n\n\n***********************************************************");
	printf("\n\t\t--------------WELCOME-------------");
	printf("\n\t****************************************************************");
	Sleep(2000);
	getch();
    system("cls");
	while (1)
	{
		system("cls");
		printf("\n enter\n 1 : for adding new records.\n 2 : for list of records");
		printf("\n 3 : for modifying records.\n 4 : for payment");
		printf("\n 5 : for searching records.");
		choice=getche();
		choice=toupper(choice);
		switch(choice)
		{
			case '4':
				payment();break;
			case '1':
				addrecords();break;
			case '2':
				listrecords();break;
			case '3':
				modifyrecords();break;
			case '5':
				searchrecords();break;
			case '6':
				system("cls");
				printf("\n\n\t\t\t\tTHANK YOU");
				printf("\n\n\n\n\n:\n\tFOR USING OUR SERVICE");
				Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\nAny key to continue");
				getch();
		}
	}
}
