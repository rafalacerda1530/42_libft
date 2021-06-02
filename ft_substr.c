/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:54:45 by rarodrig          #+#    #+#             */
/*   Updated: 2021/06/02 18:54:45 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*n_s;
	size_t	i;
	size_t	cont;

	if (s == NULL)
		return (NULL);
	if (len > strlen(s) || start > strlen(s))
		return (NULL);
	n_s = (char *)malloc(sizeof(char) * (len + 1));
	i = start;
	cont = 0;
	while ((int)len > 0)
	{
		n_s[cont] = s[i];
		i++;
		cont++;
		len--;
	}
	return ((char *)n_s);
}
