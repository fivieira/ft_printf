/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:45:30 by fivieira          #+#    #+#             */
/*   Updated: 2023/05/18 10:20:12 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_string(char *str)
{
	int	counter;

	counter = handle_string(str);
	return (counter);
}

int	handle_pointer(void *ptr_addr)
{
	int				counter;
	char			*str;
	unsigned long	addr;

	addr = (unsigned long)ptr_addr;
	counter = print_string(PRECEDING_STR);
	str = ft_itoa(addr);
	counter = counter + handle_string(str);
	free(str);
	return (counter);
}
