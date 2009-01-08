#include "strings.h"

size_t strcasecmp(char *s1, char *s2)
{
	size_t ret = 0;
	while(*s1 != '\0' && *s2 != '\0')
		ret = (toupper(*s1++) - toupper(*s2++));

	return ret;
}

size_t strncasecmp(char *s1, char *s2, size_t n)
{
	size_t i = 0;
	for (i = 0; i < n && *s1 != '\0' && *s2 != '\0'; i++)
		ret = (toupper(*s1++) - toupper(*s2++));

	return ret;
}

char *index(const char *s, int c)
{
	int i;
	for (i = 0; i < strlen(s) && s[i] != c; i++)
		;

	return (s + i);
}

char *rindex(const char *s, int c)
{
	int i;
	for (i = strlen(s); i > 0 && s[i] != c; i--)
		;
	
	return (s + i);
}


