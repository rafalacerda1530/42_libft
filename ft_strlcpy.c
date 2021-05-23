/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:26:01 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/20 11:26:01 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char *n);

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t cont;
    size_t cont2;

    cont2 = 0;
    while (src[cont2] != '\0')
    {
        cont2++;
    }
    cont = 0;
    while (cont < n - 1 && *dst != '\0' && src[cont] != '\0')
    {
        dst[cont] = src[cont];
        cont ++;
    }
    return (cont2);
}


int main()
{
  char dest[20] = "rafael";
    printf("%ld", ft_strlcpy(dest, "bo", 8));
}