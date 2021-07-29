/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msadaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:50:59 by msadaoui          #+#    #+#             */
/*   Updated: 2021/04/15 17:55:03 by msadaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_longueur_nombre(unsigned int nb)
{
	int	resultat;

	resultat = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		resultat++;
	}
	return (resultat);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				size;
	int				negatif;
	unsigned int	nbr;

	negatif = 0;
	nbr = n;
	if (n < 0 && ++negatif)
		nbr = -n;
	size = ft_longueur_nombre(nbr) + negatif;
	str = malloc(size + 1);
	if (!str)
		return (0);
	str[size] = 0;
	while (size--)
	{
		str[size] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (negatif)
		str[0] = '-';
	return (str);
}
