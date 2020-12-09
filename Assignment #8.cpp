/*Ezigbo Ugochukwu Assignment #8 10/8/2020 This program computes the commission a salesperson will receive*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void)
{
	float sales, C;
	
	/*get input*/
	printf("Enter the dollar value of sales made");
	scanf("%f", &sales);
	
	/*error checking*/
	if(!(sales>=0))
	{
		printf("The sales value must be positive or zero.");
		system("pause");
		exit(1);
	}
	
	/*calculate*/
	if(sales>=20000)
		C=500+(sales*0.05);
	else
		C=sales*0.05;
	
	/*display*/
	printf("The salesperson receives a commission of %.2f when a sales of %.2f is achieved. /n", C, sales);
	
	/*exit*/
	system("pause");
	return 0;
}
/*Enter the dollar value of sales made15000
The salesperson receives a commission of 750.00 when a sales of 15000.00 is achieved.
Enter the dollar value of sales made25000
The salesperson receives a commission of 1750.00 when a sales of 25000.00 is achieved.
Enter the dollar value of sales made-15
The sales value must be positive or zero.*/
