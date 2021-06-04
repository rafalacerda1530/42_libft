#include "libft.h"
#include <stdio.h>

static int	count_c(char const *s, char c)
{
	int	i;
	int	count;
	int	w;

	w = 0;
	i = 0;
	count = 0;
	while (s[i])
	{	
		if (s[i] == c)
			w = 0;
		else if (s[i] != c && w == 0)
		{
			w = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*word(char const *s, char c)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		f;
	int		w;

	array = (char **)malloc((count_c(s, c) + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = -1;
	f = -1;
	w = 0;
	while (s[++i])
	{
		if (s[i] == c)
			w = 0;
		else if (s[i] != c && w == 0)
		{
			w = 1;
			array[++f] = word(s + i, c);
			if (array[f] == NULL)
				return (NULL);
		}
	}
	array[count_c(s, c)] = 0;
	return (array);
}


=====================================================================


static int			ft_countwrd(char const *s, char c) //toda vez q ela for chamada, o valor é mantido (static)
{
	//ESSA FUNÇÃO VAI CONTAR AS PALAVRAS
	//PARA SABERMOS QNTS PALAVRAS VAMOS COLOCAR
	unsigned int	count; //para percorrer variavel toda
	int				cntw; //retorna qnts palavras

	count = 0;
	cntw = 0;
	while (s[count]) //loop ate a string (s) acabar
	{
		while (s[count] == c)
			s++; //enquanto é o caractere c, vc pula ele, ate acharmos a nossa palavra real
		if (s[count] != '\0')
			cntw++; //se a gente achou um c, e ainda n ta no fim da string, ent acrescenta no nosso cntw, q é usado pra saber qnd vamos quebrar linha
		while (s[count] && s[count] != c)
			count++; //percorremos a string toda ate achar um c, qnd acharmos um c, damos um loop de novo no cmc do while, ate acabar a string
	}
	return (cntw);
}
static char			*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1); //o n é o i - s2 (isso traz pra gente só a "palavra" da primeira linha (limitador))
	if (str == NULL)
		return (NULL);
	//agr a gente tem q colocar nossa palavra em nossa nova string str.
	//copia n caractres do s, pro str
	str = ft_memcpy(str, s, n) //vai copia a palavra do s, pro str :) MAGICAAA
	str[n] = '\0';
	return (str);
}
char **ft_split(char const *s, char c)
{
    char	**len; //armazena pra gente o tamanho que vamos precisar
	int		count; //variáveis para apontar posições de índice dentro de nossa string de parâmetro s
	int		i; //variáveis para apontar posições de índice dentro de nossa string de parâmetro s
	int		i2; //variáveis para apontar posições de índice dentro de nossa string de parâmetro s

	count = 0;
	i = 0;
	//agora precisamos descobrir qnt de espaço vamos usar
	len = (char **)malloc(sizeof(char *)* (ft_countwrd(s, c)) + 1); //essa função vai nos retorna qnts palavras vamos ter, + 1 para o \0
	if (len == NULL)
		return (NULL);
	//AGORA SIM PODEMOS DIVIDIR A STRING
	while (s[i])
	{
		//eqnt for c, incrementa
		while (s[i] == c)
				i++;
		i2 = i; //agr sabemos, qnd vai rolar a quebra de linha e o \0
		//enqt n acha c, continua rodando na string
		while (s[i] && s[i] != c)
			i++;
		//se houver uma palavra para a primeira linha/coluna, o i vai ser maior q j
		//a gente clc ela na posição 0 da nossa tabela
		if (i > j)
		{
			//pegamos o tamanho da "primeira linha"
			len[count] = ft_strndup(s + s2, i - s2); //s + s2 = o início da palavra que queremos
													//i - s2 = tamanho da palavra que encontramos (limitador)
				count++;
		}		
	}
	len[count] = NULL;
	return (len);
}
char const teste_split1[] = "teste teste_split1 teste3 ster";
    char **resul_split = ft_split(teste_split1, ' ');
    for(int i = 0; i < 4; i++)
        printf("teste: %s\n", resul_split[i]);
    free(resul_split);