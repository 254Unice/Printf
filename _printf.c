#include <stdio.h>
#include "main.h"

/**
  *main -character printed 
  *
  *return : Always 0
  */
int main (void)
{
	if (format == NULL)
		return (-1);

	va_start(args, format);

	length = _print_format(format, args);
	va_end(args);
	return (length);
}
		

