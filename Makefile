# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malatini <malatini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/02 21:43:30 by mahautlatin       #+#    #+#              #
#    Updated: 2021/01/10 23:28:21 by malatini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= libft.a
CFLAGS 			= -Wall -Wextra -Werror
CC				= gcc
RM				= rm -f
LIB				= ranlib
HEAD 			= libft.h
AR				= ar rc
RM 				= rm -rf
SRCS			= ft_atoi.c	ft_bzero.c ft_calloc.c ft_isalpha.c ft_isascii.c \
					ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
					ft_memccpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
					ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c \
					ft_strlcat.c ft_strncmp.c ft_strchr.c \
					ft_tolower.c ft_toupper.c \
					ft_isalnum.c ft_strlen.c ft_strlcpy.c \
					ft_strlen.c ft_strnstr.c ft_strrchr.c ft_split.c ft_strtrim.c \
					ft_substr.c ft_memcpy.c ft_strjoin.c ft_strmapi.c \

BSRCS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c ft_lstmap.c ft_lstmap.c \
					ft_lstiter.c #ft_lstdelone.c ft_lstclear.c
			
OBJ				=	$(SRCS:.c=.o)
BOBJS			=	$(BSRCS:.c=.o)

$(NAME):
			$(CC) $(CFLAGS) -c ./$(SRCS) -I $(HEAD)
			$(AR) $(NAME) $(OBJ)
			$(LIB) $(NAME)

bonus:
			$(CC) $(CFLAGS) -c ./$(BSRCS) -I $(HEAD)
			$(AR) $(NAME) $(BOBJS)
			$(LIB) $(NAME)
	
all: 		$(NAME)

clean:
			$(RM) $(OBJ) $(BOBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re bonus
