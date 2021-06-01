/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:25:06 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/21 10:25:06 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	cont;
	size_t	size;

	size = ft_strlen(dst);
	cont = 0;
	while (cont < n && dst[cont] != '\0' && src[cont] != '\0')
	{
		dst[size] = src[cont];
		++size;
		++cont;
	}
	dst[size + 1] = '\0';
	return (*dst);
}
