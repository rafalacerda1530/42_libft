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

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
	{
		return (0);
	}
	while ((s1 == s2) && (s1 != '\0') && (s2 != '\0') && (n > 0))
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char *) (s1) - (unsigned char *) (s2));
}

int main()
{
    char a[] = "aa";
    char b[] = "abc";
    int size;
    int str;
    int str2;
    
    size = 2;
    str = strncmp(a, b, size);
    str2 = ft_strncmp(a, b, size);

    ft_strncmp(a,b,size);

    printf("este é o original :%d\n", str);
    printf("este é o este o meu :%d\n", str);
    return(0);
}