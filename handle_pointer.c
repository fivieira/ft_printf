
#include "ft_printf.h"

static int	print_string(char *str)
{
	int	counter;

	counter = handle_string(str);
	return (counter);
}

int	handle_pointer(void *ptr_addr)
{
	int		counter;
	char	*str;
	unsigned int addr;

	addr = (unsigned int)ptr_addr;
	counter = print_string(PRECEDING_STR);
	str = ft_itoa(addr);
	counter = counter + handle_string(str);
	free(str);
	return (counter);
}
