#include <stdio.h>

#define IN 	1 /* inside the word */
#define OUT	0 /* outside the word */

/* count the length of words and print a histogram */
/* horizontal version */

main()
{
	int c, i, j, len = 0;
	int state = OUT;
	int wordlengths[10];

	for(i = 0; i < 10; ++i)
		wordlengths[i] = 0;

	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (len > 0) {
				if (len <= 9)
					++wordlengths[len - 1];
				else 
					++wordlengths[9];
				len = 0;
			}
		} else if (state == OUT) {
			state = IN;
			len = 1;
		} else {
			++len;
		}
	}

	for(i = 0; i < 9; ++i) {
		printf("%-2d | ", i + 1);
		for(j = 0; j < wordlengths[i]; ++j)
			printf("=");
		printf("\n");
	}
	printf("9+ | ");
	for(j = 0; j < wordlengths[9]; ++j)
		printf("=");
	printf("\n");
}
