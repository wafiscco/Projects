/* -------------------------------------------
Name: Hani Alwafi
Email: wafi.h9@gmail.com

description: 
This program allows the user to Inter their information.
After the user input their information, the information will be displayed.

I have used header files + functions + pointers and their address.
As we can see I have defined all the functions in another C file called contacts.c.

Enjoy trying the program.
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"

int main(void)
{
	
	struct Contact cont = { {""} };

	printf("Contact Management System\n");
	printf("=========================\n");

	getName(&cont.name);
	getAddress(&cont.address);
	getNumbers(&cont.numbers);

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

	printf("Structure test for Contact using functions done!\n");

	return 0;
}
