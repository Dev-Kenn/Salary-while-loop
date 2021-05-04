#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf


/*Mark Kenneth O. Ferrer DICT 1-3 */

int main(int argc, char *argv[]) {
	
	float sale, total, salary;
	sale= 0;
	
	while(sale >-1)
	{
		p("\nEnter sales in Dollar (-1 to end): ");
		s("%f", &sale);
		
		if (sale>-1)
			{	
				salary = (sale * 0.09) + 200;
				p("Salary:  $%.2f \n", salary);
				total = salary + total;
			}
	}
	p("\n The total salary for the week: $%.2f", total);
	p("\n Thank you for using the system!");
	

	return 0;
}
