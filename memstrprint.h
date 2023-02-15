#ifndef MEMSTRPRINT_H
#define MEMSTRPRINT_H

#define SIZE 25

#include <unistd.h>
#include <stdlib.h>
	
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *scr, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
char *strcpy(char *dest, const char *scr);
char *strncpy(char *dest, const char *src, size_t n);
int printf(const char *format, ...);
// helper function
unsigned int my_strlen(const char *s);
#endif


