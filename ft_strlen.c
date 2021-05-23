/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:45:36 by rarodrig          #+#    #+#             */
/*   Updated: 2021/05/20 10:45:36 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t cont;

    cont = 0;
    while (*s != 0)
    {
        ++s;
        cont++;
    }
    return(cont);
    
}

int main()
{
	printf("%ld",ft_strlen("rafael"));
	return(0);
}