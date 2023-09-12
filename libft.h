/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:12:27 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/12 12:53:38 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void	*s,  size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
/* memmove
 * strlcpy
 * strlcat*/
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*strchr(const char *s, int c);
/*strrchr*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);

#endif
