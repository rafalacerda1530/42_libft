/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:38:45 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/18 10:38:45 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static int	ft_strlen(int n);

void	*ft_memccpy(void *dest, const void *src, int c, int n)
{
	int				cont;
	unsigned char	*n_src;
	unsigned char	*n_dest;

	n_src = (unsigned char *) src;
	n_dest = (unsigned char *) dest;
	cont = 0;
	while (cont < n)
	{
		if (cont >= ft_strlen(n))
		{
			return (n_dest);
		}
		else if (n_src[cont] == c)
		{
			n_dest[cont] = n_src[cont];
			return (n_dest);
		}
		n_dest[cont] = n_src[cont];
		cont++;
	}
	return (n_dest);
}

static int	ft_strlen(int n)
{
	int	cont;

	cont = 0;
	while (cont < n)
	{
		cont ++;
	}
	return (cont);
}
