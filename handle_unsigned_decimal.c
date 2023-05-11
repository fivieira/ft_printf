
#include "ft_printf.h"

int	handle_unsigned_decimal(unsigned int value)
{
	int		counter;
	char	*str;

	str = ft_itoa(value);
	counter = handle_string(str);
	free(str);
	return (counter);
}