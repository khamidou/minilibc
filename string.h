#ifndef __STRING_H__
#define __STRING_H__

#include "stddef.h"
#include "ctype.h"

size_t strlen(char *str);
void *memcpy(char *dest, char *src, size_t n);
char *strcat(char *dest, char *src);
char *strncat(char * dest, char *src, size_t n);
size_t strcmp(char *s1, char *s2);
size_t strncmp(char *s1, char *s2, size_t n);
char *strstr(char *haystack, char *needle);
char *strrev(char *s);


#endif
