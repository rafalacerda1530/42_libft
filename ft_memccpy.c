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

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, int n)
{
	size_t			cont;
	unsigned char	*n_src;
	unsigned char	*n_dest;

	n_src = (unsigned char *) src;
	n_dest = (unsigned char *) dest;
	cont = 0;
	while (cont < (size_t)n)
	{
		if (cont >= (size_t)n)
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
