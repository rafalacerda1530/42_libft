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

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start || ft_strlen(s) < len)
		return (ft_strdup(""));
	n_s = (char *)malloc(sizeof(char) * (len + 1));
	if (n_s == NULL)
		return (NULL);
	ft_strlcpy(n_s, s + start, len + 1);
	return (n_s);
}
