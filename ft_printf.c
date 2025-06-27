/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:48:34 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/26 13:26:01 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(unsigned long ptr)
{
	char	*set;
	char	buffer[16];
	int		i;
	int		len;
	
	set = "0123456789abcdef";
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	i = 0;
	while (ptr > 0)
	{
		buffer[i++] = set[ptr % 16];
		ptr /= 16;
	}
	len = ft_putstr("0x");
	while (--i >= 0)
		len += ft_putchar(buffer[i]);
	return (len);
}

/*#include <stdio.h>

int	main(void)
{
	void *a = 0;
	void *b = 0;

	ft_printf(" %p %p \n", a, b);
	printf(" %p %p \n", a, b); // Comparación con el original
}*/

int	ft_printf2(char c, va_list arg)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(arg, int));
	if (c == 's')
		len += ft_putstr(va_arg(arg, char *));
	if (c == 'p')
		len += ft_put_ptr((unsigned long)va_arg(arg, void *));
	if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(arg, int));
	if (c == 'u')
		len += ft_put_unsigned(va_arg(arg, unsigned int));
	if (c == 'x')
		len += ft_puthex((unsigned long)va_arg(arg, unsigned int), 0);
	if (c == 'X')
		len += ft_puthex((unsigned long)va_arg(arg, unsigned int), 1);
	if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	arg;

	va_start (arg, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_printf2(str[i], arg);
		}
		else
		{
			len += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(arg);
	return (len);
}

/*int main ()
{
	char a = 'A';
	char *s = "Mery";
	int n = 42;
	
	ft_printf("Hola %c, soy %s, tengo %d años\n",a, s, n); 
	printf("Hola %c, soy %s, tengo %d años\n", a, s, n);
}*/
