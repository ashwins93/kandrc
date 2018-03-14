#include <stdio.h>

/* replace multiple blanks with a single blank in input */
main()
{
	int c;

	while((c = getchar()) != EOF) {
		if (c == ' ') {
			while((c = getchar()) == ' ')
				;
			putchar(' ');
		}
		putchar(c);
	}
}