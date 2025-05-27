NAME = test
CXX = c++
RM = rm -f
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

INCS =

SRCS =	main.cpp

INCS_DIR = ./
SRCS_DIR = ./
OBJS_DIR = ./

OBJS = $(SRCS:.cpp=.o)

INC = $(addprefix $(INCS_DIR), $(INCS))
SRC = $(addprefix $(SRCS_DIR), $(SRCS))
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
