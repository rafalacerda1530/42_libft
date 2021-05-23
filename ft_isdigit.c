/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:51:27 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/22 22:51:27 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)	
	{
		return (1);
	}
	return (0);
}

int main()
{
	int teste2;
	teste2 = ft_isdigit(2);
	printf("%d", teste2);
}
