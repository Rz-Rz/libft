/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:35:55 by kdhrif            #+#    #+#             */
/*   Updated: 2022/05/10 15:33:10 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srcln;

	srcln = ft_strlen(src);
	i = 0;
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (i + srcln);
	j = -1;
	while ((++j + i) < size - 1 && src[j])
		dst[i + j] = src[j];
	dst[j + i] = '\0';
	return (i + srcln);
}
