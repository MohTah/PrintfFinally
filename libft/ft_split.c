/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msadaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:25:46 by msadaoui          #+#    #+#             */
/*   Updated: 2021/04/15 18:28:34 by msadaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_nbr_mots(const char *str, char c)
{
	size_t	nbr_mots;

	nbr_mots = 0;
	while (*str != '\0')
	{
		while (*str == c)
			str++;
		if (*str != '\0' && *str != c)
			nbr_mots++;
		while (*str != '\0' && *str != c)
			str++;
	}
	return (nbr_mots);
}

static unsigned int	ft_nbr_caracteres(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		mot;
	int		caractere;
	int		i;

	if (!s)
		return (0);
	mot = ft_nbr_mots((char *)s, c);
	tab = malloc(sizeof(char *) * (mot + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < mot)
	{
		caractere = 0;
		while (*s != '\0' && *s == c)
			s++;
		caractere = ft_nbr_caracteres((char *)s, c);
		tab[i] = ft_substr(s, 0, caractere);
		while (*s != '\0' && *s != c)
			s++;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
