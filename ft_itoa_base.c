/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:12:33 by fivieira          #+#    #+#             */
/*   Updated: 2023/05/18 10:16:07 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

static void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

static size_t	ft_intlen_base(unsigned long long n, char *base)
{
	size_t				len;
	unsigned long long	baselen;

	len = 1;
	baselen = ft_strlen(base);
	while (n >= baselen)
	{
		n /= baselen;
		len++;
	}
	return (len);
}

char	*itoa_base(unsigned long long n, char *base)
{
	char	*str;
	int		numlen;
	int		baselen;

	numlen = ft_intlen_base(n, base);
	baselen = ft_strlen(base);
	str = ft_calloc((numlen + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (numlen)
	{
		numlen = numlen - 1;
		str[numlen] = base[n % baselen];
		n /= baselen;
	}
	return (str);
}
