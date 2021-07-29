/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msadaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:44:34 by msadaoui          #+#    #+#             */
/*   Updated: 2021/04/15 18:45:51 by msadaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(s2[0]))
		return ((char *)s1);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && (i + j) < n)
			{
				if (s2[j + 1] == '\0')
					return ((char *)s1 + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
