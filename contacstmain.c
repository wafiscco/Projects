/* -------------------------------------------
Name: Hani Alwafi
Student number: 155503188
Email: halwafi@myseneca.ca
Section: SEE
Date: 08/07/2019
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"

int main(void)
{
	// Declare variables here:{{{0}}}
	struct Contact cont = { {""} };

	// Display the title
	printf("Contact Management System\n");
	printf("=========================\n");


	// Contact Name Input:
	getName(&cont.name);
	// Contact Address Input:
	getAddress(&cont.address);
	// Contact Numbers Input:
	getNumbers(&cont.numbers);
	// Display Contact Summary Details

	printf("\nContact Details\n");
	printf("===============\n");

	printf("Name Details\n");
	printf("------------\n");
	printf("First name: %s\n", cont.name.firstName);
	printf("Middle initial(s): %s\n",cont.name.middleInitial);
	printf("Last name: %s\n\n", cont.name.lastName);

	printf("Address Details\n");
	printf("---------------\n");
	printf("Street number: %d\n", cont.address.streetNumber);
	printf("Street name: %s\n", cont.address.street);
	printf("Apartment: %d\n", cont.address.apartmentNumber);
	printf("Postal code: %s\n", cont.address.postalCode);
	printf("City: %s\n\n", cont.address.city);

	printf("Phone Numbers\n");
	printf("-------------\n");
	printf("Cell phone number: %s\n", cont.numbers.cell);
	printf("Home phone number: %s\n", cont.numbers.home);
	printf("Business phone number: %s\n\n", cont.numbers.business);

	// Display Completion Message

	printf("Structure test for Contact using functions done!\n");

	return 0;
}

/*  SAMPLE OUTPUT:

Contact Management System
=========================
Please enter the contact's first name: Wilma Dee
Do you want to enter a middle initial(s)? (y or n): y
Please enter the contact's middle initial(s): N. O.
Please enter the contact's last name: Flint Rubble
Please enter the contact's street number: 30
Please enter the contact's street name: Bedrock St.
Do you want to enter an apartment number? (y or n): y
Please enter the contact's apartment number: 12
Please enter the contact's postal code: Z8Z 7R7
Please enter the contact's city: North York
Do you want to enter a cell phone number? (y or n): Y
Please enter the contact's cell phone number: 9992223333
Do you want to enter a home phone number? (y or n): Y
Please enter the contact's home phone number: 8881112222
Do you want to enter a business phone number? (y or n): Y
Please enter the contact's business phone number: 3337779999

Contact Details
===============
Name Details
------------
First name: Wilma Dee
Middle initial(s): N. O.
Last name: Flint Rubble

Address Details
---------------
Street number: 30
Street name: Bedrock St.
Apartment: 12
Postal code: Z8Z 7R7
City: North York

Phone Numbers
-------------
Cell phone number: 9992223333
Home phone number: 8881112222
Business phone number: 3337779999

Structure test for Contact using functions done!
*/