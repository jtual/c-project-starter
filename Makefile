##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile that build the project
##

NAME		= ${PROJECT_NAME}

CFLAGS		= -Wall -Wextra -I include

LDFLAGS		= -L lib/my -lmy

SRC_DIR 	= src/

SRC			= $(SRC_DIR)${PROJECT_NAME}.c

OBJ			= $(SRC:.c=.o)

RM 			= rm -rf

$(NAME): build_libs $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

all:		$(NAME)

build_libs:
	make -C lib/my

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

debug: CFLAGS += -g
debug: re

re:	fclean all
