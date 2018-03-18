#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);

/* print length of each line from input and the line itself */
int main()
{
	int len; /* current line length */
	char line[MAXLINE]; /* current input line */

	while((len = get_line(line, MAXLINE)) > 0) {
		printf("length: %d\n", len);
		printf("%s", line);
	}

	return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}