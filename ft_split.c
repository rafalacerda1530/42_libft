/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:34:29 by rarodrig          #+#    #+#             */
/*   Updated: 2021/06/03 18:34:29 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int cword(const char *word, char delimeter)
{
	int cont;
	int i;

	if (!word || !delimeter )
		return (0);
	cont = 1;
	while (*word)
	{
		if (*word == delimeter)
			cont++;
		word++;
	}
	return (cont);
}

int main()
{
	char teste[] = "aa aa aa a";

	printf("%d", cword(teste, ' '));

	return 0;
}
