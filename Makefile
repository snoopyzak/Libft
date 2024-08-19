#Variables

SRC		= $(wildcard ft_*.c)
OBJ		= $(SRC:.c=.o)
HEAD	= ./include
NAME	= libft.a
RM		= rm -f
AR		= ar -rcs
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

#Rules

all		: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o		: %.c
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

# Debugging Info
$(info SRC = $(SRC))
$(info OBJ = $(OBJ))