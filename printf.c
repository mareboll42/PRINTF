#include "libft.h"

int	ft_printf2(char c, va_list arg)
{	
	int	len;
	
	len = 0;
	if (c == 'c')
		len = len + ft_putchar(va_arg(arg, int));
	if (c == 's')
		len = len + ft_putstr(va_arg(arg, char *));
	
//	if (c == 'p')
	
	if (c == 'd' || c == 'i')
		len = len + ft_putnbr(va_arg(arg, int));
	
	/*if (c == 'i')
	
	if (c == 'u')
	
	if (c == 'x')
	
	if (c == 'X')
	
	if (c == '%')*/
	return(len);
}

int	ft_printf(char const *str, ...)
{
	int	i;
	int	len;
	va_list arg;
	va_start(arg,str);
	
	
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len = len + ft_printf2(str[i], arg);
		}
		else
		{
			len = len + ft_putchar(str[i]);
		}
		i++;
	}
	va_end(arg);
	return (len);
}

int main ()
{
	char a = 'b';
	char *s = "Pietro";
	int n = 2;
	
	ft_printf("Hola %c, soy %s, tengo %d anos\n",a, s, n); 
	printf("Hola %c, soy %s, tengo %d anos\n", a, s, n);
}
