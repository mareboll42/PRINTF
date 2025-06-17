/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:35:47 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/21 14:36:11 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *s)
{	
	int	len;
	
	len = 0;
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
		len++;
	}
	return(len);
}

/*int	main(void)
{
	char str[] = "holaaa";
	ft_putstr (str);
	return(0);
}*/
