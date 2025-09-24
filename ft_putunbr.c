/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harici <harici@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:55:30 by harici            #+#    #+#             */
/*   Updated: 2025/09/24 16:45:23 by harici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_fpf(unsigned int n, int len)
{
	if (n >= 10)
		len = ft_putunbr_fpf(n / 10, len);
	len = ft_putchar_fpf(n % 10 + '0', len);
	return (len);
}
