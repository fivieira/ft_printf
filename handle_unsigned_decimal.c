/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned_decimal.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:45:22 by fivieira          #+#    #+#             */
/*   Updated: 2023/05/18 10:22:23 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
