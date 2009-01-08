#ifndef __CTYPE_H__
#define __CTYPE_H__

#define toupper(c) (c >= 97 && c <= 122) ? (c - 32) : c
#define tolower(c) (c >= 65 && c <= 90)  ? (c + 32) : c 

#endif
