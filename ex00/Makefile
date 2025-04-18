NAME = bureaucrat
CC = c++
RM = rm -f
CFLAGS = -std=c++98 -Wall -Wextra -Werror

INCS =	Bureaucrat.hpp

SRCS =	main.cpp \
		Bureaucrat.cpp

OBJS_DIR = ./
SRCS_DIR = ./
INCS_DIR = ./

OBJS = $(SRCS:.cpp=.o)

SRC = $(addprefix $(SRCS_DIR), $(SRCS))
INC = $(addprefix $(INCS_DIR), $(INCS))
OBJ = $(addprefix $(OBJS_DIR), $(OBJS))

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

%.o: %.cpp $(INC)
	$(CC) -c -I$(INCS_DIR) -o $@ $< $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
