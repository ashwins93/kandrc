#include <stdio.h>

float ftoc(float fahr);

/* temp conversion from fahrenheit to celsius
   using functions */
int main()
{
	float fahr;

	printf("Fahrenheit   Celsius\n");
	printf("==========   =======\n");
	for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
		printf("%10.0f   %7.1f\n", fahr, ftoc(fahr));
	}

	return 0;
}

/* take fahrenheit as input and return celsius value */
float ftoc(float fahr)
{
	return (5.0/9.0) * (fahr - 32);
}