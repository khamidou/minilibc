/*
  Note : most of theses routines assume that strings end with '\0'
*/

#include "string.h"

size_t strlen(char *str)
{
	int i = 0;
	for (i = 0; *(str + i) != '\0'; i++)
		;

	return i;
}


void *memcpy(char *dest, char *src, size_t n)
{
        char *ptr = dest;
	int i = 0;
	for(i = 0; i < n; i++)
		*dest++ = *src++;
	return (void *) ptr;
}


char *strcat(char *dest, char *src)
{
	memcpy(dest + strlen(dest) - 1, src, strlen(src));
	return dest;
}

char *strncat(char * dest, char *src, size_t n)
{
	memcpy(dest + max(n, strlen(src)) - 1, src, max(n, strlen(src)));
	return dest;
}

size_t strcmp(char *s1, char *s2)
{
	size_t ret = 0;
	while(*s1 != '\0' && *s2 != '\0')
		ret = (*s1++ - *s2++);

	return ret;
}

size_t strncmp(char *s1, char *s2, size_t n)
{
	size_t i = 0;
	size_t ret = 0;
	for (i = 0; i < n && *s1 != '\0' && *s2 != '\0'; i++)
		ret = (*s1++ - *s2++);

	return ret;
}

char *strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; i < max(strlen(needle),strlen(haystack)); i++) {
		/* Skip the first elements of the string that are not in needle */
		for(; *haystack != *needle; haystack++);
		ptr = haystack;
		if (strlen(haystack) < strlen(needle))
			return NULL;

		if (strncmp(needle, haystack, strlen(needle)) == 0)
			return haystack;
	}
}

void swap(void *a, void *b)
{
	void *c = b;
	b = a;
	a = c;
}

char *strrev(char *s)
{
	int i = 0;
	for (i = 0; i < strlen(s); i++) 
		swap(s + i, s + strlen(s) - i);
}

char *strchr(char *s, int c)
{
	size_t i = 0;
	for (i = 0; i < strlen(s); i++)
		if (*(s + i) == c)
			return (s + i);
	return NULL;
}

char *strtok(char *str, const char *delim)
{
	static char **strtok_arr;
	static int strtok_called; /* We have to know if strtok was previously called with this string or not */
	if (str != NULL) {
		strtok_arr = NULL;
		strtok_called = 1;
	} 
	if (strtok_called != 1 && str == NULL) {
		return NULL;  /* This is the first time the user calls strtok and he calls it with a NULL argument*/
	}
	
	int occur = 0;  
	while(strstr(str, delim) != NULL)
		/* First compute the number of occurences :*/
		occur++;
	strtok_arr = malloc(occur * sizeof(char *));

	if (strtok_arr == NULL)
		return NULL;

	char *p = strstr(str, delim);;
	while (p != NULL) {
		malloc(strlen(p) * sizeof(char));
	} 
}
