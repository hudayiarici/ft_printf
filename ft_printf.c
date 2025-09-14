/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harici <harici@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:37:28 by harici            #+#    #+#             */
/*   Updated: 2025/07/26 19:17:16 by harici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_specifier(const char *format, int i, va_list arg, int len)
{
	if (format[i + 1] == 'c')
		len = ft_putchar(va_arg(arg, int), len);
	else if (format[i + 1] == 's')
		len = ft_putstr(va_arg(arg, char *), len);
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		len = ft_putnbr(va_arg(arg, int), len);
	else if (format[i + 1] == 'u')
		len = ft_putunbr(va_arg(arg, unsigned int), len);
	else if (format[i + 1] == 'x')
		len = ft_puthexa(va_arg(arg, unsigned int), HEX_L, len);
	else if (format[i + 1] == 'X')
		len = ft_puthexa(va_arg(arg, unsigned int), HEX_U, len);
	else if (format[i + 1] == 'p')
		len = ft_putptr(va_arg(arg, void *), len);
	else if (format[i + 1] == '%')
		len = ft_putchar('%', len);
	return (len);
}

static int	is_valid_specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == 'p' || c == '%');
}

static int	process_format(const char *format, va_list arg)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			len = handle_specifier(format, i, arg, len);
			if (!is_valid_specifier(format[i + 1]))
			{
				len = ft_putchar(format[i], len);
				i--;
			}
			i += 2;
		}
		else
		{
			len = ft_putchar(format[i], len);
			i++;
		}
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		len;

	va_start(arg, format);
	len = process_format(format, arg);
	va_end(arg);
	return (len);
}
