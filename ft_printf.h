/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:48:34 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/26 13:26:01 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int ft_printf(char const *, ...);
int ft_putchar(int c);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_puthex(unsigned int n, int uppercase);
int ft_put_unsigned(unsigned int n);

#endif
