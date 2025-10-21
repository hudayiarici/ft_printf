/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harici <harici@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:41:44 by harici            #+#    #+#             */
/*   Updated: 2025/10/21 20:01:15 by harici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fpf(char c, int len)
{
	write(1, &c, 1);
	len++;
	return (len);
}

int	ft_putchar_error(char c, int len)
{
	write(2, &c, 1);
	len++;
	return (len);
}
