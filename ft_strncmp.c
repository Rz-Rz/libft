/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:53:50 by kdhrif            #+#    #+#             */
/*   Updated: 2022/05/22 16:04:09 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	if (s1 && !s2)
		return (*s1);
	if (!s1 && s2)
		return (*s2);
	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]) && i < n - 1)
		i++;
	if (s1[i] != s2[i] && (n != 0))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
