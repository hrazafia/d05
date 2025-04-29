NAME = test
CXX = c++
RM = rm -f
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

INCS =

SRCS =	main.cpp

OBJS_DIR = ./
SRCS_DIR = ./
INCS_DIR = ./

OBJS = $(SRCS:.cpp=.o)

SRC = $(addprefix $(SRCS_DIR), $(SRCS))
INC = $(addprefix $(INCS_DIR), $(INCS))
OBJ = $(addprefix $(OBJS_DIR), $(OBJS))

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CXX) -o $(NAME) $(OBJ) $(CXXFLAGS)

%.o: %.cpp $(INC)
	$(CXX) -c -I$(INCS_DIR) -o $@ $< $(CXXFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
