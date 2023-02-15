
#include "memstrprint.h"


// helper function to get the length of string ...
unsigned int my_strlen(const char *c) {
	unsigned int count = 0;
	while (*c != '\0') {
		count++;
		c++;
	}
	return count;
}

// strcat function to concatenate strings ...
char *strcat(char *dest, const char* src) {
	
	//int size_of_dest = my_strlen(dest);
	char *ptr = dest + my_strlen(dest);

	while (*src != '\0') { *ptr++ = *src++;}
	*ptr++ = '\0';
	return dest;
}

// strncat function to concatenate the first string with the n first char of the second string...
char *strncat (char *dest, const char *src, size_t n) {

	char *ptr = dest + my_strlen(dest);

	while (*src != '\0' && n--) {

		*ptr++ = *src++;
	}
	*ptr = '\0';
	return dest;
}

// strcmp function to compare 2 strings ...
int strcmp (const char *s1, const char *s2) {

	while ((*s1 == *s2) && (*s1) && (*s2)) { s1++; s2++; }
	return ((unsigned char)(*s1) - (unsigned  char)(*s2));	
}

// strncmp function to compare the first string with the n first char of the second string ...
int srtncmp (const char *s1, const char *s2, size_t n) {
	
	if (n == 0 || !s1 || !s2) { return 0; }
	while ((*s1) && (*s2) && (n-- -1 > 0) && (*s1 == *s2)) { s1++; s2++; }

	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

// strcpy function to copy one scr string into a destionation string ...
char *strcpy (char *dest, const char *src) {
	char *tmp = dest;
	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return tmp;
}

// strncpy function to copy n first char of src string into destination string ...
char *strncpy (char *dest, const char *src, size_t n) {
	if (!(*dest)) { return NULL; }

	char *temp;
	temp = dest;
	while (*src && n--) {*dest = *src; dest++; src++;}
	*dest = '\0';

	return temp;
}


