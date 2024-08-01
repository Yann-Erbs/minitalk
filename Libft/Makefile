# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yerbs <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 19:34:49 by yerbs             #+#    #+#              #
#    Updated: 2023/10/28 21:28:22 by yerbs            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#   __    __     ______     __  __     ______     ______   __     __         ______    
#  /\ "-./  \   /\  __ \   /\ \/ /    /\  ___\   /\  ___\ /\ \   /\ \       /\  ___\   
#  \ \ \-./\ \  \ \  __ \  \ \  _"-.  \ \  __\   \ \  __\ \ \ \  \ \ \____  \ \  __\   
#   \ \_\ \ \_\  \ \_\ \_\  \ \_\ \_\  \ \_____\  \ \_\    \ \_\  \ \_____\  \ \_____\ 
#    \/_/  \/_/   \/_/\/_/   \/_/\/_/   \/_____/   \/_/     \/_/   \/_____/   \/_____/ 
                                                                                    

SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

#    _______       ______       ___   __       __  __       ______      
#  /_______/\     /_____/\     /__/\ /__/\    /_/\/_/\     /_____/\     
#  \::: _  \ \    \:::_ \ \    \::\_\\  \ \   \:\ \:\ \    \::::_\/_    
#   \::(_)  \/_    \:\ \ \ \    \:. `-\  \ \   \:\ \:\ \    \:\/___/\   
#    \::  _  \ \    \:\ \ \ \    \:. _    \ \   \:\ \:\ \    \_::._\:\  
#     \::(_)  \ \    \:\_\ \ \    \. \`-\  \ \   \:\_\:\ \     /____\:\ 
#      \_______\/     \_____\/     \__\/ \__\/    \_____\/     \_____\/ 

BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c



OBJS = $(SRCS:.c=.o)

OBJSB = $(BONUS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c -I./
RM = rm -f
AR = ar rcs
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	${AR} $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) ${OBJSB}

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus : ${OBJSB}
	${AR} ${NAME} ${OBJSB}

.PHONY: all clean fclean re bonus
