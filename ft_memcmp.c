/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:04:57 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/19 12:04:57 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char *n_str1;
    unsigned char *n_str2;

    n_str1 = (unsigned char *) str1;
    n_str2 = (unsigned char *) str2;

    while (n > 0)
    {
      if (*n_str1 != *n_str2)
      {
		return(*n_str1 - *n_str2);
	  }

      *n_str2++;
      *n_str1++;
      n--;
    }
  return (0);
}

void main()
{
    char *str = "ab";
    char *str1 = "an";
    int retorno;

    retorno = ft_memcmp(str, str1, 3);
    printf ("minha função: %d\n", retorno);
    char *str3 = "ab";
    char *str4 = "an";
    int retorno1;
    retorno1 = memcmp (str3, str4, 3);
    printf ("função original: %d\n", retorno1);
}