/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:57:40 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/20 11:38:35 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
	printf("mi función usando la cadena vacia: %lu\n", strlen(""));
	printf("mi función usando patata: %zu\t", ft_strlen("patata"));
	printf("mi función usando patata: %lu\n", strlen("patata"));
	printf("FT_MEMSET: \n");
	printf("FT_BZERO: \n");
	printf("FT_MEMCPY: \n");
	printf("FT_MEMMOVE: \n");
	printf("FT_STRLCPY: \n");
	printf("FT_STRLCAT: \n");
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
	printf("FT_STRDUP: \n");
	printf("------------------------------------\nFUNCIONES PARTE 2: \n");
	printf("FT_SUBSTR: \n");
	printf("FT_STRJOIN: \n");
	printf("FT_STRTRIM: \n");
	printf("FT_SPLIT: \n");
	printf("FT_ITOA: \n");
	printf("FT_STRMAPI: \n");
	printf("FT_STRITERI: \n");
	printf("FT_PUTCHAR_FD: \n");
	printf("FT_PUTSTR_FD: \n");
	printf("FT_PUTENDL_FD: \n");
	printf("FT_PUTNBR_FD: \n");
	printf("------------------------------------\nFUNCIONES BONUS: \n");
	printf("FT_LSTNEW: \n");
	printf("FT_LSTADD_FRONT: \n");
	printf("FT_LSTSIZE: \n");
	printf("FT_LSTLAST: \n");
	printf("FT_LSTADD_BACK: \n");
	printf("FT_LSTDELONE: \n");
	printf("FT_LSTCLEAR: \n");
	printf("FT_LSTITER: \n");
	printf("FT_LSTMAP: \n");
}
