/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:46:50 by rpaparon          #+#    #+#             */
/*   Updated: 2024/09/30 17:29:59 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int ft_atoi(const char *str);
size_t ft_strlen(const char *s);
int ft_strlcpy(char *dst, const char *src, int dstsize);
int ft_strlcat(char *dst, const char *src, int dstsize);
int ft_strchr(const char *s, int c);
int ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, int n);
int ft_memset(void *b, int c, int len);
int ft_bzero(void *s, int n);
int ft_memcpy(void *dst, const void *src, int n);
int ft_memmove(void *dst, const void *src, int len);
int ft_memchr(const void *s, int c, int n);
int ft_memcmp(const void *s1, const void *s2, int n);
int ft_strnstr(const char *haystack, const char *needle, int len);
int ft_strncmp(const char *s1, const char *s2, int n);



