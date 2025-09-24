/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harici <harici@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:52:38 by harici            #+#    #+#             */
/*   Updated: 2025/09/24 16:45:41 by harici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexa_sizet(size_t n, char *base, int len)
{
	if (n >= 16)
		len = ft_puthexa_sizet(n / 16, base, len);
	len = ft_putchar_fpf(base[n % 16], len);
	return (len);
}

int	ft_putptr_fpf(void *ptr, int len)
{
	if (ptr == NULL)
		return (ft_putstr_fpf("(nil)", len));
	len = ft_putstr_fpf("0x", len);
	len = ft_puthexa_sizet((size_t)ptr, HEX_L, len);
	return (len);
}
