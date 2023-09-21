/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:57:40 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/21 12:24:22 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char	aux(unsigned int i, char c)
{
	if (i < 32)
	i++;
	return (c + 1);
}

void	del(void *content)
{
	content = "";
}

int	main(void)
{
	printf("FUNCIONES PARTE 1:\n");
	printf("FT_ISALPHA:\n");
	printf("mi función usando a: %d\t", ft_isalpha('a'));
	printf("función original usando a: %d\n", isalpha('a'));
	printf("mi función usando 48: %d\t", ft_isalpha(48));
	printf("función original usando 48: %d\n", isalpha(48));
	printf("FT_ISDIGIT: \n");
	printf("mi función usando 49: %d\t", ft_isdigit(49));
	printf("función original usando 49: %d\n", isdigit(49));
	printf("mi función usando a: %d\t", ft_isdigit('a'));
	printf("función original usando a: %d\n", isdigit('a'));
	printf("FT_ISALNUM: \n");
	printf("mi función usando 49: %d\t", ft_isalnum(49));
	printf("función original usando 49: %d\n", isalnum(49));
	printf("mi función usando ~: %d\t", ft_isalnum('~'));
	printf("función original usando ~: %d\n", isalnum('~'));
	printf("FT_ISASCII: \n");
	printf("mi función usando 49: %d\t", ft_isascii(49));
	printf("función original usando 49: %d\n", isascii(49));
	printf("mi función usando ñ: %d\t", ft_isascii(164));
	printf("función original usando ñ: %d\n", isascii(164));
	printf("FT_ISPRINT: \n");
	printf("mi función usando 49: %d\t", ft_isprint(49));
	printf("función original usando 49: %d\n", isprint(49));
	printf("mi función usando ñ: %d\t", ft_isprint(164));
	printf("función original usando ñ: %d\n", isprint(164));
	printf("FT_STRLEN: \n");
	printf("mi función usando la cadena vacia: %zu\t", ft_strlen(""));
	printf("función original usando la cadena vacia: %lu\n", strlen(""));
	printf("mi función usando patata: %zu\t", ft_strlen("patata"));
	printf("función original usando patata: %lu\n", strlen("patata"));
	printf("FT_MEMSET: \n");

	printf("FT_BZERO: \n");

	printf("FT_MEMCPY: \n");

	printf("FT_MEMMOVE: \n");

	printf("FT_STRLCPY: \n");
	char	dst[30];
	char	src[] = "hola que tal patata";
	printf("mi función: resultado: %zu\t, dst: %s\n", ft_strlcpy(dst, src, 13), dst);
	printf("función original: resultado: %lu\t, dst: %s\n", strlcpy(dst, src, 13), dst);
	printf("FT_STRLCAT: \n");
	char    dst1[26] = "patata";
	char    src1[] = "hola que tal";
	printf("mi función: resultado: %zu\t, dst: %s\n", ft_strlcat(dst1, src1, 20), dst1);
	printf("función original: resultado: %lu\t, dst: %s\n", strlcat(dst1, src1, 20), dst1);
	printf("FT_TOUPPER: \n");
	printf("mi función usando a: %d\t", ft_toupper('a'));
	printf("función original usando a: %d\n", toupper('a'));
	printf("mi función usando A: %d\t", ft_toupper('A'));
	printf("función original usando A: %d\n", toupper('A'));
	printf("FT_TOLOWER: \n");
	printf("mi función usando A: %d\t", ft_tolower('A'));
	printf("función original usando A: %d\n", tolower('A'));
	printf("mi función usando a: %d\t", ft_tolower('a'));
	printf("función original usando a: %d\n", tolower('a'));
	printf("FT_STRCHR: \n");
	printf("mi función usando patata y a: %s\t", ft_strchr("patata", 'a'));
	printf("función original usando patata y a: %s\n", strchr("patata", 'a'));
	printf("mi función usando patata y o: %s\t", ft_strchr("patata", 'o'));
	printf("función original usando patata y o: %s\n", strchr("patata", 'o'));
	printf("FT_STRRCHR: \n");
	printf("mi función usando patata y a: %s\t", ft_strrchr("patata", 'a'));
	printf("función original usando patata y a: %s\n", strrchr("patata", 'a'));
	printf("mi función usando patata y o: %s\t", ft_strrchr("patata", 'o'));
	printf("función original usando patata y o: %s\n", strrchr("patata", 'o'));
	printf("FT_STRNCMP: \n");
	printf("mi función usando test200 y test0: %d\t", ft_strncmp("test\200", "test\0", 6));
	printf("función orginal usando test200 y test0: %d\n", strncmp("test\200", "test\0", 6));
	printf("FT_MEMCHR: \n");

	printf("FT_MEMCMP: \n");

	printf("FT_STRNSTR: \n");
	printf("mi función usando Foo Bar Baz, Bar, 4: %s\t", ft_strnstr("Foo Bar Baz", "Bar", 4));
	printf("función original usando Foo Bar Baz, Bar, 4 : %s\n", strnstr("Foo Bar Baz", "Bar", 4));
	printf("mi función usando Foo Bar Baz, Bar, 10: %s\t", ft_strnstr("Foo Bar Baz", "Bar", 10));
	printf("función original usando Foo Bar Baz, Bar, 10: %s\n", strnstr("Foo Bar Baz", "Bar", 10));
	printf("FT_ATOI: \n");
	printf("mi función usando 1234: %d\t", ft_atoi("1234"));
	printf("función original usando 1234: %d\n", atoi("1234"));
	printf("mi función usando -2147483648: %d\t", ft_atoi("-2147483648"));
	printf("función original usando -2147483648: %d\n", atoi("-2147483648"));
	printf("FT_CALLOC: \n");
	char    *str1;
	char    *str2;
	str1 = (char *)ft_calloc(5, sizeof(char));
	str2 = (char *)calloc(5, sizeof(char));
	strcpy(str1, "hola");
	strcpy(str2, "hola");
	printf("mi función: %s\t", str1);
	printf("función original: %s\n", str2);
	free(str1);
	free(str2);
	printf("FT_STRDUP: \n");
	char	*str3;
	char	*str4;
	str3 = ft_strdup("hola");
	str4 = strdup("hola");
	printf("mi función: %s\t", str3);
	printf("función original: %s\n", str4);
	free(str3);
	free(str4);
	printf("------------------------------------\nFUNCIONES PARTE 2: \n");
	printf("FT_SUBSTR: \n");
	char	*str5;
	str5 = ft_substr("hola que tal", 5, 8);
	printf("resultado: %s\n", str5);
	free(str5);
	printf("FT_STRJOIN: \n");
	char	*str6;
	str6 = ft_strjoin("holiwis ", "que tal");
	free(str6);
	printf("resultado: %s\n", str6);
	printf("FT_STRTRIM: \n");
	char	*str7;
	str7 = ft_strtrim("hola \t\n que \t tal\n\t", " \t\n");
	printf("resultado: %s\n", str7);
	free(str7);
	printf("FT_SPLIT: \n");
	char	**str8;
	int i;
	str8 = ft_split("hola-que-tal-patata", '-');
	i = 0;
	while (i < 4)
	{
		printf("%s\n", str8[i]);
		free(str8[i]);
		i++;
	}
	free(str8);
	printf("FT_ITOA: \n");
	char	*str9;
	str9 = ft_itoa(-2147483648);
	printf("resultado: %s\n", str9);
	free(str9);
	printf("FT_STRMAPI: \n");
	char	*str10;
	str10 = ft_strmapi("hola patata", aux);
	printf("antes: hola patata\t resultado: %s\n", str10);
	free(str10);
	printf("FT_STRITERI: \n");
	
	printf("FT_PUTCHAR_FD: \n");
	ft_putchar_fd('h', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	printf("FT_PUTSTR_FD: \n");
	ft_putstr_fd("holiwis\n", 1);
	printf("FT_PUTENDL_FD: \n");
	ft_putendl_fd("patata", 1);
	printf("FT_PUTNBR_FD: \n");
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
	printf("------------------------------------\nFUNCIONES BONUS: \n");
	t_list	*list;
	list = NULL;
	printf("la lista tiene %d nodos\n", ft_lstsize(list));
	printf("FT_LSTNEW: \n");
	list = ft_lstnew("2");
	printf("la lista tiene %d nodos\n", ft_lstsize(list));
	printf("FT_LSTADD_FRONT: \n");
	ft_lstadd_front(&list, ft_lstnew("1"));
	printf("FT_LSTSIZE: \n");
	printf("la lista tiene %d nodos\n", ft_lstsize(list));
	printf("FT_LSTLAST: \n");
	printf("el ultimo nodo contiene: %s\n", ft_lstlast(list)->content);
	printf("FT_LSTADD_BACK: \n");
	ft_lstadd_back(&list, ft_lstnew("3"));
	printf("la lista tiene %d nodos\n", ft_lstsize(list));
	 printf("el ultimo nodo contiene: %s\n", ft_lstlast(list)->content);
	printf("FT_LSTDELONE: \n");
	ft_lstdelone(ft_lstlast(list), del);
	 printf("el ultimo nodo contiene: %s\n", ft_lstlast(list)->content);
	printf("la lista tiene %d nodos\n", ft_lstsize(list));
	printf("FT_LSTCLEAR: \n");
	 printf("el ultimo nodo contiene: %s\n", ft_lstlast(list)->content);
	ft_lstclear(&list, del);
	printf("la lista tiene %d nodos\n", ft_lstsize(list));
	printf("FT_LSTITER: \n");

	printf("FT_LSTMAP: \n");

}
