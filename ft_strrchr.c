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

#include <stdio.h>

static int ft_strlen(const char *n);
char *ft_strrchr(const char *s, int c)
{
	unsigned char n_c;
	size_t size;

	size = ft_strlen(s);

	while (*s != '\0')
	{
		s++;
	}
	while (size > 0)
	{
		
		if (*s == c)
		{
			return((char*)s);
		}
		s--;
		size--;
	}
	return (NULL);
	
}


static int ft_strlen(const char *n)
{
	size_t cont;

	cont = 0;
	while (n[cont] != '\0')
	{
		cont++;
	}
	return(cont);
}

int main () 
{
   const char str[] = "http://wwwt1utorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
}