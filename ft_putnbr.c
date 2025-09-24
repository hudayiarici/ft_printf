/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harici <harici@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:46:37 by harici            #+#    #+#             */
/*   Updated: 2025/09/24 16:45:14 by harici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fpf(int n, int len)
{
	if (n == -2147483648)
	{
		len = ft_putchar_fpf('-', len);
		len = ft_putchar_fpf('2', len);
		len = ft_putnbr_fpf(147483648, len);
		return (len);
	}
	if (n < 0)
	{
		len = ft_putchar_fpf('-', len);
		n = -n;
	}
	if (n >= 10)
		len = ft_putnbr_fpf(n / 10, len);
	len = ft_putchar_fpf(n % 10 + '0', len);
	return (len);
}
