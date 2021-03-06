/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:27:17 by kdhrif            #+#    #+#             */
/*   Updated: 2022/05/27 10:19:42 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

static void	ft_strrev(char *str)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

static int	ft_intlen(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;
	size_t	len;

	if (n == 0)
		return (ft_strdup("0"));
	neg = (n < 0);
	str = ft_calloc(ft_intlen(n) + 1 + neg, sizeof(*str));
	if (!str)
		return (NULL);
	len = 0;
	while (n)
	{
		str[len++] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	if (neg)
		str[len] = '-';
	ft_strrev(str);
	return (str);
}
