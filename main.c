#include "ft_printf.h"

int main()
{
	long		nbr;
	nbr = 9223372036854775807;
	printf("org: %p\n", &nbr);
	ft_printf("ft: %p", &nbr);
}
