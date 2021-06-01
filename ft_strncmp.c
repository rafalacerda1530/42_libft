/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 20:23:53 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/22 20:23:53 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
	{
		return (0);
	}
	while ((s1 == s2) && (s1 != 0) && (s2 != 0) && (n > 0))
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char *)(s1) - (unsigned char *)(s2));
}
