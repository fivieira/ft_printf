
#include "ft_printf.h"

int	handle_hexadecimal(unsigned int	value)
{
	int		counter;
	char	*str;

	str = ft_itoa(value);
	counter = handle_string(str);
	free(str);
	return (counter);
}

int	handle_hexadecimal_upper(unsigned int value)
{
	int		counter;
	char	*str;

	str = ft_itoa(value);
	counter = handle_string(str);
	free(str);
	return (counter);
}
