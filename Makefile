# EXECUTABLE GENERE

NAME = libftprintf.a

# COMPILATEUR

CC = gcc
CFLAGS = -Wall #-Werror -Wextra

# CLEAN

RM = rm -f

# SOURCES

SRC = ft_printf.c    \
	  ft_printf_utils.c

OBJ = $(SRC:.c=.o)

# COPIE DE LIBFT.A COMPILE DANS LIBFTPRINTF.A

$(NAME): $(OBJ)
	make bonus -C ./libft
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJ)

# PREMIERE TARGET

all: $(NAME)

# CLEAN LES EXECUTABLES

clean:
	$(RM) $(OBJ)

# CLEAN LES EXECUTABLES ET L'EXECUTABLE PRINCIPAL

fclean: clean
	$(RM) $(NAME)

# RESET

re: fclean all

.phony: $(NAME) re all clean fclean

