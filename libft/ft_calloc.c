/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:50:51 by fivieira          #+#    #+#             */
/*   Updated: 2023/04/21 17:01:00 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	*tam;
	size_t	total_size;

	total_size = nitems * size;
	tam = malloc(total_size);
	if (!tam)
	{
		return (NULL);
	}
	ft_memset(tam, 0, total_size);
	return ((void *)tam);
}

// int	main(void)
// {
// 	ft_calloc(3, 5);
// }