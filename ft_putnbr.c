/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:37:42 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/21 14:37:57 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	long	nb;
	int	len;
	
	len = 0;
	nb = n;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		len = len + ft_putnbr(nb / 10);
	len = len + ft_putchar(nb % 10 + '0');
	return(len);
}

/*int	main(void)
{
	int n1 = 42;
	ft_putnbr(n1);
}*/

