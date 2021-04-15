/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:48:39 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/14 14:02:25 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include   <stdio.h>
# include   <string.h>
# include   <unistd.h>
# include	<stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
int		ft_strncmp(const char *s, const char *d, size_t n);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *c, size_t n);
int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int str);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t tab);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *d, const void *s, size_t n);
void	*ft_memset(void *b, int c, size_t l);
char	*ft_strchr(const char *c, int a);
size_t	ft_strlcat(char *d, const char *s, size_t n);
char	*ft_strnstr(const char *s, const char *t, size_t n);
size_t	ft_strlcpy (char *dest, const char *src, size_t size);
char	*ft_strrchr(const char *s, int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_calloc(size_t num, size_t Size);
char	*ft_strdup(const char *src);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strjoin(const char *str, const char *str2);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strmapi(char const *c, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(void *));
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);

#endif /* LIBFT_H */
