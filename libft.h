/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:12:03 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/29 15:25:20 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef unsigned char	t_byte;
typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

int						ft_islower(int c);
int						ft_isupper(int c);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_isspace(int c);
int						ft_tolower(int c);
int						ft_toupper(int c);

int						ft_atoi(const char *str);
char					*ft_itoa(int n);
char					*ft_itoa_base(int n, int base);

void					*ft_memset(void *s, int c, size_t n);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memccpy(void *dest, const void *src, int c,
									size_t n);
void					*ft_memmove(void *dest, const void *src, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
t_byte					ft_swap_bits(t_byte byte);

void					ft_putchar(char c);
void					ft_putstr(char const *s);
void					ft_putendl(char const *s);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr_fd(int n, int fd);
void					ft_putlst(t_list **first);

char					*ft_strupcase(char *str);
char					*ft_strlowcase(char *str);
char					*ft_strrev(char *str);
char					*ft_strcapitalize(char *str);
int						ft_str_is_lowercase(char *str);
int						ft_str_is_uppercase(char *str);
int						ft_str_is_alpha(char *str);
int						ft_str_is_numeric(char *str);
int						ft_str_is_printable(char *str);
size_t					ft_strlen(const char *s);
char					*ft_strnew(size_t size);
char					*ft_strcpy(char *dest, const char *src);
char					*ft_strncpy(char *dest, const char *src, size_t n);
size_t					ft_strlcpy(char *dst, const char *src, size_t size);
char					*ft_strdup(const char *s);
char					*ft_strndup(const char *s, size_t n);
char					*ft_strcat(char *dest, const char *src);
char					*ft_strncat(char *dest, const char *src, size_t n);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *str, const char *tofind);
char					*ft_strnstr(const char *str, const char *tofind,
									size_t n);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s, char (*f)(unsigned int,
									char));
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strsub(char const *s, unsigned int start,
									size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
char					**ft_strsplit(char const *s, char c);

t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstdelone(t_list **alst,
										void (*del)(void *, size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstaddend(t_list **alst, t_list *new);
void					ft_lstdelend(t_list **alst,
										void (*del)(void *, size_t));
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list					*ft_lstfind(t_list **alst, void *elem);

int						ft_factorial(int nb);
int						ft_power(int nb, int power);
int						ft_sqrt(int nb);
int						ft_max(int *tab, size_t len);
int						ft_min(int *tab, size_t len);
void					ft_sort_int_tab(int *tab, size_t len);
int						ft_match(char *s1, char *s2);
int						ft_nmatch(char *s1, char *s2);
int						ft_countwords(char const *s, char c);

#endif
