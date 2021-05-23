/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:23:12 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/21 18:23:12 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	unsigned char n_c;

	n_c = (unsigned char ) c;
	while (*(unsigned char *) s != n_c)
	{
		++s;
	}
	return((unsigned char *)s);
}

int main () 
{
   const char str[] = "http://wwwt1utorialspoint.com";
   const char ch = '1';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
}