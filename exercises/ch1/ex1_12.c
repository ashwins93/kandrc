#include <stdio.h>

/* print one word per line from the input line */
main()
{
	int c;

	while((c = getchar()) != EOF) {
		if(c == ' ') {
			while((c = getchar()) == ' ' )
				;
			if (c == EOF) break;
			putchar('\n');
		}
		putchar(c);
	}
}