# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: woumecht <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 18:12:09 by woumecht          #+#    #+#              #
#    Updated: 2022/10/28 18:11:12 by woumecht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a


SRCS =  ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c 	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c	\
		ft_striteri.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\

SRCSB =	ft_lstnew.c			\
 		ft_lstadd_front.c	\
		ft_lstadd_back.c	\
		ft_lstsize_bonus.c  \
		ft_lstlast_bonus.c  \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c	\
		$(SRCS)



OBJS = $(SRCS:.c=.o)

OBJSB = $(SRCSB:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	
$(OBJS): $(SRCS) 
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS) $(OBJSB)
	ar rc $(NAME) $(OBJS) $(OBJSB)

clean:
	rm -rf $(OBJS) $(OBJSB) 

fclean: clean
	rm -f $(NAME)

re: fclean all

git:
	git add . && git commit -m "hhh" && git push