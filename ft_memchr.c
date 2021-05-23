/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:34:24 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/19 10:34:24 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *) str == c)
		{
			return((void *)str);
		}
		str++;
		n--;
	}
	return(NULL);
}

int main () 
{
   const char str[] = "http://w.wwtutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);
}