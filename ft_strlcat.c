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

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
static int ft_strlen(char *n);
char ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t cont;
	unsigned char n_src;
	size_t size;

	size = ft_strlen(dst);
	cont = 0;

	while (cont < n  && dst[cont] != '\0' && src[cont] != '\0')
	{
		dst[size] = src[cont];
		++size;
		++cont;
	}

	dst[size + 1] = '\0';
	return(*dst);
}

static int ft_strlen(char *n)
{
	size_t cont;

	cont = 0;
	while (n[cont] != '\0')
	{
		cont++;
	}
	return(cont);
}

int main()
{
  	char largatixa2[] = "rafael";
	char dest2[] = "luiz";
	char largatixa[] =  " lacerda";
	char src[] =  " mog";

	//strlcat(dest2, src, 10);
	printf("este é após strlcat %s\n", dest2);

	ft_strlcat(largatixa2, largatixa, 10);
	printf("este é após %s\n", largatixa2);	

	return(0);
}
