/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harici <harici@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:34:05 by harici            #+#    #+#             */
/*   Updated: 2025/07/26 19:17:37 by harici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char *base, int len)
{
	if (n >= 16)
		len = ft_puthexa(n / 16, base, len);
	len = ft_putchar(base[n % 16], len);
	return (len);
}
