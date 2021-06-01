/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:31:18 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/27 11:31:18 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t	 		cont;

	temp = malloc(nmemb * size);
	if (temp == NULL)
	{
		return (NULL);
	}
	cont = 0;
	while (temp[cont] < (nmemb * size))
	{
		temp[cont] = 0;
		++cont;
	}
	return ((void *)temp);
}
