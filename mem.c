//#include <stddef.h>
#include "memstrprint.h"

// memset function to set memory ...
void *my_memset(void *s, int c, size_t n) {
	
	unsigned char *temp = s;

	while (n--) {
		*temp++ = (unsigned char) c;
	}
	return s;
}

// memcpy function to make copy of memory ...
void *my_memcpy(void *dest, const void *src, size_t n) {
	
	char *temp;

	if (!dest && !src) { return NULL; } // check and make sure that dest and src are not NULL ...
	temp = dest;
	while (n--) { *temp++ = *(char *)src++;} // keep decrementing n as long 
	//as we can and give the valur of src to temp while incrementing them ...

	return dest;
}

// memcmp function to compare memory ...
int memcmp (const void *s1, const void *s2, size_t n) {
	// check and make sure that n, s1, s2 exist and not null also that *s1 = *s2 ...
	while (n && (s1) && (s2) && (*((char *)s1) == *((char *)s2))) {
		n--; s1++; s2++; // decrement n while incrementing s1 and s2 ...
	}
	if (!n) { return 0; } // return 0 if n is 0;
	if (!s1 || !s2) {return -1; } // return -1 if s1 and s2 are NULL ...

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
