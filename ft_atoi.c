/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 20:45:41 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/22 20:45:41 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(const char *nptr)
{
	int res;
	int sign;
	int cont;

	res = 0;
	sign = 1;
	cont = 0;
	while (nptr[cont] == ' ' || nptr[cont] <= 32)
	{
		cont++;
	}
	while (nptr[cont] == '+' || nptr[cont] == '-')
	{
		if (nptr[cont] == '-')
		{
			sign = sign * -1;
		}
		cont++;
	}
	while (nptr[cont] >= 48 && nptr[cont] <= 57)
	{
		res = nptr[cont] - '0' + (res * 10);
		cont++;
	}
	return (res * sign);
}

int main () {
   int val;
   char nptr1[20] = "98993489";
   char nptr2[20] = "tutorialspoint.com";
   
  
   val = ft_atoi(nptr1);
   printf("nptring value = %s, Int value = %d\n", nptr1, val);

   val = ft_atoi(nptr2);
   printf("nptring value = %s, Int value = %d\n", nptr2, val);

   return(0);
}