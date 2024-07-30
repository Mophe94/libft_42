# ************************************************************************** #
#                                 DIRECTORIES                                #
# ************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strlen.c \
		ft_strtrim.c ft_isalnum.c ft_isprint.c ft_memmove.c ft_strjoin.c \
		ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c ft_memchr.c \
		ft_memset.c ft_strlcat.c ft_strnstr.c ft_tolower.c ft_bzero.c \
		ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlcpy.c ft_strrchr.c \
		ft_toupper.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BSOURCE = ft_lstnew_bonus.c ft_lstadd_front_bonus.c  ft_lstsize_bonus.c \
		ft_lstlast_bonus.c  ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

OBJ = $(SRCS:.c=.o)

BOBJ = $(BSOURCE:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus : $(OBJ) $(BOBJ)
		ar rcs $(NAME) $(OBJ) $(BOBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : re clean fclean all bonus

