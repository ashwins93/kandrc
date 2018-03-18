#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void reverse(char s[]);

/* reverse the input one line at a time */
int main()
{
	int len; /* current line length */
	char line[MAXLINE]; /* current input line */

	while((len = get_line(line, MAXLINE)) > 0) {
		reverse(line);
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

/* reverse: reverse the characters in s */
void reverse(char s[])
{
	int len, i, end, temp;

	i = 0;
	while(s[i] != '\0')
		++i;

	len = i;

	end = len - 1;
	if (s[len - 1] == '\n') end = len - 2;

	for(i = 0; i <= end / 2; ++i) {
		temp = s[i];
		s[i] = s[end - i];
		s[end - i] = temp;
	}
}