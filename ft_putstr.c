/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harici <harici@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:44:38 by harici            #+#    #+#             */
/*   Updated: 2025/09/24 16:44:57 by harici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fpf(char *s, int len)
{
	if (s == NULL)
	{
		len = ft_putstr_fpf("(null)", len);
		return (len);
	}
	while (*s)
	{
		len = ft_putchar_fpf(*s, len);
		s++;
	}
	return (len);
}
