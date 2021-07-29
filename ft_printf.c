/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msadaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:55:19 by msadaoui          #+#    #+#             */
/*   Updated: 2021/07/29 16:40:44 by msadaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft/libft.h"

void	print_integer(const char *format, t_data *me, va_list ap)
{
	int	i;
	int	num;

	i = 0;
	if (format[i] == 'd')
		me->convert = 'd';
	else if (format[i] == 'i')
		me->convert = 'i';
	num = va_arg(ap, int);
	ft_putnbr(num, me, 10);
}

void	print_string(const char *format, t_data *me, va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	ft_putstr(str, me);
}

void	print_char(const char *format, t_data *me, va_list ap)
{
	char	a;

	a = va_arg(ap, int);
	ft_putchar(a, me);
}

void	print_hexa_ptr(const char *format, t_data *me, va_list ap)
{
	int					i;
	unsigned long long	ptr;

	i = 0;
	if (format[i] == 'p')
		me->convert = 'p';
	else if (format[i] == 'x')
		me->convert = 'x';
	else if (format[i] == 'X')
		me->convert = 'X';
	ptr = va_arg(ap, unsigned long long);
	if (me->convert == 'p')
		ft_putstr("0x", me);
	ft_putnbr(ptr, me, 16);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	t_data	*me;
	va_list	ap;

	i = 0;
	me = malloc(sizeof(t_data));
	me->count = 0;
	me->convert = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			++i;
			me->convert = format[i];
			if_forest(format, me, ap, i);
		}
		else
			ft_putchar(format[i], me);
		++i;
	}
	count = me->count;
	free (me);
	return (count);
}
