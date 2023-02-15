
#include "memstrprint.h"

void test_strcmp(char *x1, char* x2) {

	int val = strcmp(x1, x2);
	if (val == 0) {printf ("%s", "** x1 is equal to x2 ** STRCMP SUCCEDED **\n");
	} else if (val < 0) {
		printf ("%s", "** x1 is less than x2 ** STRCMP SUCCEDED **\n");
	} else {
		printf ("%s", "** x2 is less than x1 ** STRCMP SUCCEDED **\n");
	}
}

void test_strncmp(char *x1, char *x2, size_t n) {

	int val = strcmp(x1, x2);
	if (val == 0) {
		printf ("%s", "** x1 is equal to x2 ** STRNCMP SUCCEDED **\n");
	}
	else if (val < 0) {
		printf ("%s", "** x1 is less than x2 ** STRNCMP SUCCEDED **\n");
	}
	else {
		printf ("%s", "** x2 is less than x1 ** STRNCMP SUCCEDED\n");
	}
}

void test_strcpy(char *dest, const char *src) {
	 char *my_char;
	//if (sizeof(src) > sizeof(dest)) {
	//	printf("%s", "** DESTINATION'S SIZE too small for copy **\n");
	//	printf("%s", "** STRCPY FAILLED **\n");
	//	return;
	//}
	//else {


		printf("check\n");
		//my_char = strcpy(dest, src);
		printf ("%s", strcpy(dest, src));

		printf("check1\n");
		printf ("\n%s", "** STRCPY SUCCEDED **\n");
//	}
}

void test_strncpy(char* src, char *dest, size_t n) {

	char *my_char;
	if (sizeof(dest) < n) {
		printf ("%s", "** DESTINATION'S size too small for copy **\n");
		printf ("%s", "** STRNCPY FAILLED **\n");
		return;
	}
	else {
		my_char = strncpy(dest, src, n);
		printf ("%s", my_char);
		printf ("\n%s", "** STRNCPY SUCCEDED **\n");
	}
}

void test_strcat(char *dest, char *src) {
	char *my_char;
	my_char = strcat(dest, src);
	if (my_strlen(my_char) < my_strlen(src)) {
			printf ("%s", "** STRCAT FAILLED **\n");
	} else {
		printf ("%s", my_char);
		printf ("%s", "** STRCAT SECCEDED **\n");
	}
}

void test_strncat(char dest[], char src[], size_t n) {
		
		char my_char[SIZE];
		printf("check\n");
		printf("%s", strncat(dest, src, n));
		//for (int i = 0; i < my_strlen(strncat(dest, src, n)); i++) {
		//	my_char[i] = strncat(dest, src, n)[i];
		//}
//	my_char = strncat(dest, src, n);

		//printf("check0\n");
//	if (my_strlen(my_char) < (my_strlen(dest) + n)) {
//		printf ("%s", "** STRNCAT FAILLED **\n");
//	} else {
//		printf ("%s", "** STRNCAT SUCCEDED **\n");
//	}

}

void test_memset(char *str, int c, size_t n) {
	char *my_char;
	my_char = memset(str, c, n);
	if (my_strlen(my_char) != my_strlen(str)) {
		printf ("%s", "** MEMSET FAILLED **\n");
	} else {
		printf ("\n%s", my_char);
		printf ("%s", "** MEMSET SUCCEDED **\n");
	}
}

void test_memcpy(char *dest, char *src, size_t n) {
	char *my_char;
	my_char = memcpy(dest, src, n);
	if ((my_strlen(src) > SIZE) || (sizeof(src) > sizeof(dest))) {
		printf ("%s", "** SRC too big **\n");
		return;
	} else if (my_char != src) {
		printf ("%s", "** MEMCPY FAILLED **\n");
		return;
	} else {
		printf ("%s", my_char);
		printf ("\n%s", "** MEMCPY SUCCEDED **\n");
	}
}

void test_memcmp(char *str1, char *str2, size_t n) {
	int val = 0;
	val = memcmp(str1, str2, n);
	if (val == 0) {
		printf ("%s", "** str1 is equal to str2 **\n ** MEMCMP SUCCEDED **\n");
	} else if (val > 0) {
		printf ("%s", "** str2 is less than str1 **\n ** MEMCMP SUCCEDED **\n");
	} else {
		printf ("%s", "** str1 is less than str2 **\n ** MEMCMP SUCCEDED **\n");
	}
}

int main(int argc, char *argv[]) {
	(void)argc;

	test_strcmp("hejhhhjh", "Chegfiajou");
	test_strcmp("Hervehhh", "Hervehhh");
	test_strcmp("", "herve");
	test_strncmp("Chendjou", "Herve", 5);
	test_strncmp("", "fffhn", 4);
	test_strncmp("zAA", "fffhn", 0);

	//test_strcat("herve ", "chendjou");
	//test_strncat("hhhhhh", " lllllllCC", 4);
	//test_strncpy("", "checkin", 3);
	//printf("check\n");
	//test_strcpy("", "check");
	//test_strcpy("check1", "check2");

	//test_memset("hhh ooo kkk uuu", 0, 5);
	return 0;
}
