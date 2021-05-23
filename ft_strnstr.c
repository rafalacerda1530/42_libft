/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:03:03 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/21 20:03:03 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *big, const char *to_find, size_t len)
{
	size_t cont1;
	size_t cont2;

	cont1 = 0;
	cont2 = 0;

	if (*to_find == '\0')
	{
		return((char *) big);
	}

	while (cont1 < len && big[cont1]) //o big != de nulo
	{
		
		while (big[cont1 + cont2] == to_find[cont2] && cont1 + cont2 < len && to_find[cont2] != '\0')
		{
			cont2++;
		}
		if (to_find[cont2] == '\0')
		{
			return ((char *) big + cont1); // neste retorno o big vai estar parado no indice 0, quando ele retornar
										   // vai retornar do indice 0 + cont1, ele vai retornar a partir deste indice
										   // e não somente esse indice, é para isso que serve o contador
		}
		cont1++;
		cont2 = 0;
	}
	return(NULL);
}

int main()
{
    char a[] = "pa padeiro padrinha padre pão padaria";
    char c[] = "padre";
    char teste;
    
    teste = 
    
    printf("%s \n", ft_strnstr(a, c, 50));
    return(0);
}