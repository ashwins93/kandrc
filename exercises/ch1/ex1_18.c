#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);

/* print lines from input without trailing spaces or blanks
   do not print entirely blank lines */
int main()
{
	int len; /* current line length */
	char line[MAXLINE]; /* current input line */
	int i;

	while((len = get_line(line, MAXLINE)) > 0) {

		i = len - 1;

		while(i >= 0 && 
			(line[i] == '\n' || line[i] == ' ' || line[i] == '\t'))
			i--;
		if (i >= 0) {
			line[++i] = '\n';
			line[++i] = '\0';
			printf("%s", line);
		}

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