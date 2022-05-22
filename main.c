#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%d\n", 1024);
	len2 = printf("%d\n", 1024);
	
	 _printf("%d\n", -1024);
	 printf("%d\n\n", -1024);
	 
	 _printf("%d\n", 0);
	 printf("%d\n\n", 0);
	 
	 _printf("%d\n", INT_MAX);
	 printf("%d\n\n", INT_MAX);
	 
	 _printf("%d\n", INT_MIN);
	 printf("%d\n\n", INT_MIN);
	/* _printf("%d", l); 
	 _printf("%d", l); */
	 _printf("There is %d bytes in %d KB\n", 1024, 1);
	 printf("There is %d bytes in %d KB\n\n", 1024, 1);
	 
	 _printf("%d - %d = %d\n", 1024, 2048, -1024);
	 printf("%d - %d = %d\n\n", 1024, 2048, -1024);
	 
	 _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	 printf("%d + %d = %d\n\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	 
	 _printf("%i\n", -1024);
	 printf("%i\n\n", -1024);
	 
	 _printf("%i\n", 0);
	 printf("%i\n\n", 0);
	 
	 _printf("%i\n", INT_MAX);
	 printf("%i\n\n", INT_MAX);
	 
	 _printf("%i\n", INT_MIN);
	 printf("%i\n\n", INT_MIN);
	 
	/* _printf("%i", l); 
	 _printf("%i", l); */
	 _printf("There is %i bytes in %i KB\n", 1024, 1);
	 printf("There is %i bytes in %i KB\n\n", 1024, 1);
	 
	 _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	 printf("%i + %i = %i\n\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	 
	 _printf("%d == %i\n", 1024, 1024);
	 printf("%d == %i\n\n", 1024, 1024);
	 
	 _printf("iddi%diddiiddi\n", 1024);
	  printf("iddi%diddiiddi\n\n", 1024);
	  
	 _printf("%d == %i\n", 1024, 1024);
	 printf("%d == %i\n\n", 1024, 1024);
	 
	 _printf("%d\n", 10000);
	 _printf("%d\n\n", 10000);
	 
	 _printf("%i\n", 10000);
	 _printf("%i\n\n", 10000);
	 
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
