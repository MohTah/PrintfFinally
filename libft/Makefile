# ------------------ DÉCLARATION VARIABLES ------------------

# EXECUTABLE GÉNÉRÉ

NAME = libft.a

# COMPILATEUR

CC = gcc
CFLAGS = -Wall -Wextra -Werror

# CLEAN

RM = rm -f

# SOURCES

SRC = ft_atoi.c  \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen.c  \
	ft_tolower.c  \
	ft_toupper.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strcpy.c \
	
SRC_B = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_B:.c=.o)


# ------------------ COMMANDES / RÈGLES ---------------------

# CIBLES & DÉPENDANCES
all : $(NAME)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)

bonus : $(OBJ) $(OBJ_B)
		ar rc $(NAME) $(OBJ) $(OBJ_B)

# CLEAN LES EXECUTABLES
clean : 
		$(RM) $(OBJ) $(OBJ_B)

# CLEAN LES EXECUTABLES ET L'EXECUTABLE PRINCIPAL
fclean : clean	
		$(RM) $(NAME)

# RESET
re : fclean all