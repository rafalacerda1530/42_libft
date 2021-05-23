/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:02:45 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/18 12:02:45 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int ft_strlen(unsigned char *n);

void *ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t cont;
	size_t size;
	unsigned char *n_str2;
	unsigned char *n_str1;

	n_str2 = (unsigned char *) str2;
	n_str1 = (unsigned char *) str1;

	cont = 0;
	size = ft_strlen(n_str2);

	while (cont < n)
	{
		if (n > ft_strlen(n_str1))
		{
			
		}
		if (cont == size)
		{
			return(n_str1);
		}
		n_str1[cont] = n_str2[cont];
		cont ++;
	}
	return(n_str1);
}

static int ft_strlen(unsigned char *n)
{
	size_t cont;

	cont = 0;
	while (n[cont] != '\0')
	{
		cont++;
	}
	return(cont);
}
