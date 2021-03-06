/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:55:12 by kdhrif            #+#    #+#             */
/*   Updated: 2022/05/19 16:11:28 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s) + 1;
	while (--size >= 0)
		if (s[size] == (char)c)
			return ((char *)s + size);
	return (0);
}
