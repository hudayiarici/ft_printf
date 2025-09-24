/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harici <harici@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:37:40 by harici            #+#    #+#             */
/*   Updated: 2025/09/24 16:45:45 by harici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define HEX_U "0123456789ABCDEF"
# define HEX_L "0123456789abcdef"

int		ft_putchar_fpf(char c, int len);
int		ft_putstr_fpf(char *s, int len);
int		ft_putnbr_fpf(int n, int len);
int		ft_putunbr_fpf(unsigned int n, int len);
int		ft_puthexa_fpf(unsigned int n, char *base, int len);
int		ft_putptr_fpf(void *ptr, int len);
int		ft_printf(const char *format, ...);

#endif
