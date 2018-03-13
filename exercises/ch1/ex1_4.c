#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ...,300 */

main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("Celsius Fahrenheit\n");
	printf("======= ==========\n");
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32;
		printf("%7.0f %10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}