#include "variadic_functions.h"

/**
 *print_all - print al type
 *@format: list of arguments in the function
 *
 *Return: always void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *pass;
	int i = 0;

	va_start(args, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				pass = va_arg(args, char *);
				if (pass != NULL)
				{
					printf("%s", pass);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
				format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
