/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harici <harici@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:46:37 by harici            #+#    #+#             */
/*   Updated: 2025/07/26 19:17:42 by harici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int len)
{
	if (n == -2147483648)
	{
		len = ft_putchar('-', len);
		len = ft_putchar('2', len);
		len = ft_putnbr(147483648, len);
		return (len);
	}
	if (n < 0)
	{
		len = ft_putchar('-', len);
		n = -n;
	}
	if (n >= 10)
		len = ft_putnbr(n / 10, len);
	len = ft_putchar(n % 10 + '0', len);
	return (len);
}
