NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_memset.c ft_strlcat.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c
OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_strlen.o ft_memset.o ft_strlcat.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o
FLAGS = -Wall -Werror -Wextra
RM = rm -fr

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar -r $(NAME) $(OBJS)
clean:
	$(RM) *.o libft.a
fclean:
	$(RM) $(NAME)
re: fclean all
