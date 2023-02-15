#include <stdio.h>
#include <stdarg.h>
#include "memstrprint.h"

int printf(const char *format, ...) {

	va_list arg;
	int it_is_done;

	va_start (arg, format);
	it_is_done = vfprintf (stdout, format, arg);
	va_end(arg);

	return it_is_done;
}

