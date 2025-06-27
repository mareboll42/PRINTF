/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfaux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:48:34 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/26 13:26:01 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s && *s != '\0')
	{
		write(1, s, 1);
		s++;
		len++;
	}
	return (len);
}

/*int	main(void)
{
	char str[] = "holaaa";
	ft_putstr (str);
	return(0);
}*/

int	ft_puthex(unsigned long n, int uppercase)
{
	int		len;
	char	*set;

	if (n == 0)
		return (ft_putchar('0'));
	len = 0;
	if (uppercase == 1)
		set = "0123456789ABCDEF";
	else
		set = "0123456789abcdef";
	if (n >= 16)
		len += ft_puthex(n / 16, uppercase);
	len += ft_putchar(set[n % 16]);
	return (len);
}

int	ft_putnbr(int n)
{
	long	nb;
	int		len;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		len = len + write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		len = len + ft_putnbr(nb / 10);
	len = len + ft_putchar(nb % 10 + '0');
	return (len);
}

/*int	main(void)
{
	int n1 = 42;
	ft_putnbr(n1);
}*/

int	ft_put_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_put_unsigned(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
