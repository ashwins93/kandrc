#include <stdio.h>

/* verifying the value of getchar() != EOF */
main()
{
  int c;

  while( c = getchar() != EOF) {
    putchar(c);
  }
  printf("%d\n", c);
}