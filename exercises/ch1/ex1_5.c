#include <stdio.h>

main()
{
  float fahrenheit;

  printf("Fahrenheit Celsius\n");
  printf("========== =======\n");

  for(fahrenheit = 300; fahrenheit >= 0; fahrenheit = fahrenheit - 20) {
    printf("%10.0f %6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit - 32));
  }
}