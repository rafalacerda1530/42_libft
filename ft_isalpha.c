/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 21:28:28 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/22 21:28:28 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))	
	{
		return (1);
	}
	return (0);
}

int main()
{
	char teste[] = "ates1te";
	int teste2;
	teste2 = ft_isalpha('a');
	printf("%d", teste2);
}
