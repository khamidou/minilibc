#ifndef __STRINGS_H__
#define __STRINGS_H__

size_t strcasecmp(char *s1, char *s2);
size_t strncasecmp(char *s1, char *s2, size_t n);
char *index(const char *s, int c);
char *rindex(const char *s, int c);

#endif
