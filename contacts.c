/* -------------------------------------------
Name: Hani Alwafi
Email: wafi.h9@gmail.com

description: 
Here I have defined all the functions that I have created in contacts.h file.
----------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"

void getName(struct Name* name)
{
	char y;
	printf("Please enter the contact's first name: ");
	scanf(" %[^\n]", (*name).firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &y);
	if (y == 'y' || y == 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %[^\n]", (*name).middleInitial);
		y = ' ';
	}

	printf("Please enter the contact's last name: ");
	scanf(" %[^\n]", (*name).lastName);
};

void getAddress(struct Address* address)
{
	int valid = 0;
	char y;
	do {
		printf("Please enter the contact's street number: ");
		scanf("%d", &(*address).streetNumber);
		if ((*address).streetNumber > 0) {
			valid = 1;
		}
		else {
			valid = 0;
			printf("Invalid number!\n");
		}
	} while (valid == 0);
	printf("Please enter the contact's street name: ");
	scanf(" %[^\n]", (*address).street);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &y);
	if (y == 'y' || y == 'Y') { 
		do {
			printf("Please enter the contact's apartment number: ");
			scanf("%d", &(*address).apartmentNumber);
			if ((*address).apartmentNumber > 0) {
				valid = 1;
			}
			else {
				valid = 0;
				printf("Invalid number!\n");
			}
			y = ' ';
		} while (valid == 0);
	}
	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]", (*address).postalCode);
	printf("Please enter the contact's city: ");
	scanf(" %[^\n]", (*address).city);
};

void getNumbers(struct Numbers* number)
{
	char y;
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &y);
	if (y == 'y' || y == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %[^\n]", (*number).cell);
		y = ' ';
	}
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &y);
	if (y == 'y' || y == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf(" %[^\n]", (*number).home);
		y = ' ';
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &y);
	if (y == 'y' || y == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf(" %[^\n]", (*number).business);
		y = ' ';
	}
}
