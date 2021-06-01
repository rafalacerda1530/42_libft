/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:48:12 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/21 18:48:12 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;

	size = ft_strlen(s);
	while (*s != '\0')
	{
		s++;
	}
	while (size > 0)
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s--;
		size--;
	}
	return (NULL);
}
