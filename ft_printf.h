/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harici <harici@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:37:40 by harici            #+#    #+#             */
/*   Updated: 2025/07/26 19:20:56 by harici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define HEX_U "0123456789ABCDEF"
# define HEX_L "0123456789abcdef"

int		ft_putchar(char c, int len);
int		ft_putstr(char *s, int len);
int		ft_putnbr(int n, int len);
int		ft_putunbr(unsigned int n, int len);
int		ft_puthexa(unsigned int n, char *base, int len);
int		ft_putptr(void *ptr, int len);
int		ft_printf(const char *format, ...);

#endif
