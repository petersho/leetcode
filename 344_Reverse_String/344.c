#include <stdio.h>

char t[6];

char* reverseString(char* s)
{

	t[0] = s[4];
	t[1] = s[3];
	t[2] = s[2];
	t[3] = s[1];
	t[4] = s[0];
	t[5] = 0;

	return t;
}


int main()
{
	char *s = "hello";
	char *t;

	t = reverseString(s);


	return 0;
}
