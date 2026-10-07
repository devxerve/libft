NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar

SRCS = ft_atoi.c \
       ft_bzero.c \
       ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_memset.c \
       ft_putchar_fd.c \
       ft_putnbr_fd.c \
       ft_putstr_fd.c \
       ft_strdup.c \
       ft_strlcat.c \
       ft_strlcpy.c \
       ft_strlen.c \
       ft_strncmp.c \
       ft_tolower.c \
       ft_toupper.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_memchr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re