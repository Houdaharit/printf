#include "ft_printf.h"

int main()
{
	char *str = "NULL";
	printf("org: %u\n", str);
	printf(" %d ",ft_printf("ft:  %u", str));
}
