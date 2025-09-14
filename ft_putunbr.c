/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harici <harici@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:55:30 by harici            #+#    #+#             */
/*   Updated: 2025/07/26 19:17:58 by harici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n, int len)
{
	if (n >= 10)
		len = ft_putunbr(n / 10, len);
	len = ft_putchar(n % 10 + '0', len);
	return (len);
}
