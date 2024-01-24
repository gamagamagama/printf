/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:06:53 by matus             #+#    #+#             */
/*   Updated: 2023/11/29 15:36:14 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *input, ...);
int 	ft_print_char(int c);
int		ft_print_str(char *str);

int	ft_putstr(char *s);
int	ft_putchar_fd(char c, int fd);
int	ft_putnbr_fd(int n);
int		ft_uint_len(unsigned int n);
int	ft_unint(unsigned int n, int fd);
int		ft_print_int(int n);
int		ft_print_uint(unsigned int n);
int		ft_adrr(unsigned long n, int ident);
int		ft_print_ptr(unsigned long n, int ident);
int		ft_print_hex(unsigned int n, int ident);
int		ft_print_input(const char *spec, va_list ap);


#endif