# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/15 17:34:44 by fdagbert          #+#    #+#              #
#    Updated: 2017/11/29 16:15:06 by fdagbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./
FUNCTIONS = $(SRC)ft_atoi.c				\
			$(SRC)ft_bzero.c			\
			$(SRC)ft_countwords.c		\
			$(SRC)ft_factorial.c		\
			$(SRC)ft_isalnum.c			\
			$(SRC)ft_isalpha.c			\
			$(SRC)ft_isascii.c			\
			$(SRC)ft_isdigit.c			\
			$(SRC)ft_islower.c			\
			$(SRC)ft_isprint.c			\
			$(SRC)ft_isspace.c			\
			$(SRC)ft_isupper.c			\
			$(SRC)ft_itoa_base.c		\
			$(SRC)ft_itoa.c				\
			$(SRC)ft_lstadd.c			\
			$(SRC)ft_lstaddend.c		\
			$(SRC)ft_lstdel.c			\
			$(SRC)ft_lstdelend.c		\
			$(SRC)ft_lstdelone.c		\
			$(SRC)ft_lstfind.c			\
			$(SRC)ft_lstiter.c			\
			$(SRC)ft_lstmap.c			\
			$(SRC)ft_lstnew.c			\
			$(SRC)ft_match.c			\
			$(SRC)ft_max.c				\
			$(SRC)ft_memalloc.c			\
			$(SRC)ft_memccpy.c			\
			$(SRC)ft_memchr.c			\
			$(SRC)ft_memcmp.c			\
			$(SRC)ft_memcpy.c			\
			$(SRC)ft_memdel.c			\
			$(SRC)ft_memmove.c			\
			$(SRC)ft_memset.c			\
			$(SRC)ft_min.c				\
			$(SRC)ft_nmatch.c			\
			$(SRC)ft_power.c			\
			$(SRC)ft_putchar.c			\
			$(SRC)ft_putchar_fd.c		\
			$(SRC)ft_putendl.c			\
			$(SRC)ft_putendl_fd.c		\
			$(SRC)ft_putlst.c			\
			$(SRC)ft_putnbr.c			\
			$(SRC)ft_putnbr_fd.c		\
			$(SRC)ft_putstr.c			\
			$(SRC)ft_putstr_fd.c		\
			$(SRC)ft_sort_int_tab.c		\
			$(SRC)ft_sqrt.c				\
			$(SRC)ft_strcapitalize.c	\
			$(SRC)ft_strcat.c			\
			$(SRC)ft_strchr.c			\
			$(SRC)ft_strclr.c			\
			$(SRC)ft_strcmp.c			\
			$(SRC)ft_strcpy.c			\
			$(SRC)ft_strdel.c			\
			$(SRC)ft_strdup.c			\
			$(SRC)ft_strequ.c			\
			$(SRC)ft_str_is_alpha.c		\
			$(SRC)ft_str_is_lowercase.c	\
			$(SRC)ft_str_is_numeric.c	\
			$(SRC)ft_str_is_printable.c	\
			$(SRC)ft_str_is_uppercase.c	\
			$(SRC)ft_striter.c			\
			$(SRC)ft_striteri.c			\
			$(SRC)ft_strjoin.c			\
			$(SRC)ft_strlcat.c			\
			$(SRC)ft_strlcpy.c			\
			$(SRC)ft_strlen.c			\
			$(SRC)ft_strlowcase.c		\
			$(SRC)ft_strmap.c			\
			$(SRC)ft_strmapi.c			\
			$(SRC)ft_strncat.c			\
			$(SRC)ft_strncmp.c			\
			$(SRC)ft_strncpy.c			\
			$(SRC)ft_strndup.c			\
			$(SRC)ft_strnequ.c			\
			$(SRC)ft_strnew.c			\
			$(SRC)ft_strnstr.c			\
			$(SRC)ft_strrchr.c			\
			$(SRC)ft_strrev.c			\
			$(SRC)ft_strsplit.c			\
			$(SRC)ft_strstr.c			\
			$(SRC)ft_strsub.c			\
			$(SRC)ft_strtrim.c			\
			$(SRC)ft_strupcase.c		\
			$(SRC)ft_swap_bits.c		\
			$(SRC)ft_tolower.c			\
			$(SRC)ft_toupper.c
HEADER = ./
OBJECTS = $(FUNCTIONS:.c=.o)
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I $(HEADER) -c $(FUNCTIONS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
