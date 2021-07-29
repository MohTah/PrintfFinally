#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_data
{
	int		count;
	char	convert;
}				t_data;

void	print_integer(const char *format, t_data *me, va_list ap);
void	print_string(const char *format, t_data *me, va_list ap);
void	print_char(const char *format, t_data *me, va_list ap);
void	print_hexa_ptr(const char *format, t_data *me, va_list ap);
int		ft_printf(const char *format, ...);
void	ft_putchar(char c, t_data *me);
void	ft_putstr(char *s, t_data *me);
void	ft_putnbr(long long n, t_data *me, int base);
void	ft_putnbr_unsigned(long n, t_data *me);
void	if_forest(const char *format, t_data *me, va_list ap, int i);

#endif
