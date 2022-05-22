#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
 
int main(void)
{
	int len, len2;

	len = _printf("Let's print a simple sentence.\n");
	len2 = printf("Let's print a simple sentence.\n");

	_printf("%c\n", 'S');
	printf("%c\n\n", 'S');
	
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("A char inside a sentence: %c. Did it work?\n\n", 'F');	
	
	_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("Let'see if the cast is correctly done: %c. Did it work?\n\n", 48);
	
	_printf("%s", "This sentence is retrieved from va_args!\n");
	printf("%s", "This sentence is retrieved from va_args!\n\n");
	
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n\n", "know");
	
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0); 
	printf("Complete the sentence: You %s nothing, Jon Snow.\n\n", (char *)0);
	
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c\n", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');

	_printf("%%\n");
	printf("%%\n\n");
	_printf("Should print a single percent sign: %%\n");
	printf("Should print a single percent sign: %%\n\n");
	
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("%s%c%c%c%s%%%s%c\n", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("css%ccs%scscscs\n", 'T', "Test");
	printf("css%ccs%scscscs\n\n", 'T', "Test");
	
	_printf(NULL);
	_printf("%c\n", '\0');
	_printf("%\n");
	_printf("%!\n");	
	_printf("%K\n");
	
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
