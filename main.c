#include "ft_printf.h"

int main()
{
	int		nbr;
	nbr = 9223372036854775807;
	printf("org: %u\n", nbr);
	ft_printf("ft: %u", nbr);
}
