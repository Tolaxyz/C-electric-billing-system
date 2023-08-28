# include <stdio.h>
# include <conio.h>

int main()
{

	int units;
	int i;

	float total_bill;

	//printf- function used to display the output on the users screen.

		printf("\n\n\t\t Welcome user, the Electricity billing system is ready\n\n");

		printf("\t	 Electricity Tariff for households(Rates/units)\n\n");

	for(i=0; i<=70; i++)
        // printf()- is used to create a placeholder for the + operator markings for the information printed in the console.
		printf("+");
		printf("\n\t0 - 20 Units ...................... =N.30/unit	 |\n\n");

		printf("\t21 - 30 Units ...................... =N.70/unit	 |\n\n");

		printf("\t31 - 50 Units ...................... =N.85/unit	 |\n\n");

		printf("\t51 - 150 Units ...................... =N.100/unit	    |\n\n");

		printf("\t151 - 250 Units ...................... =N.110/unit    |\n\n");

		printf("\t251 - 400 Units ...................... =N.120/unit    |\n\n");

		printf("\t400+ Units ...................... =N.130/unit	|\n\n");
	for(i=0;i<=70;i++)
			printf("+");
		printf("\nPlease enter your total units consumed : \n\n");

	//scanf()- function is used to get the input value from the user.
		scanf("%d", & units);
	//after getting input from user, we will check the conditions to calculate the bill (the main C programming manipulation)

	// 0-20 units
	if (units <= 20)
		total_bill = units * 30;

	// 21-30 units
	else if (units <= 30)
		total_bill = units * 70;

	// 31-50 units
	else if (units <= 50)
		total_bill = units * 85;

	// 51-150 units
	else if (units <= 150)
		total_bill = units * 10;

	// 151-250 units
	else if (units <= 250)
		total_bill = units * 110;

	// 251-400 units
	else if (units <= 400)
		total_bill = units * 130;

	//printf()- here the print f function displays the result of the arithmetic done in C calculated with the input provided from the user
	printf("\n\nYour total bill in naira.%f", total_bill);

	//getch()- getch function is used to stop the result on screen until any key is pressed.
	getch();

}
