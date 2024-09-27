# Makefile for libft

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
INC_DIR = includes
SRC_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJ_FILES = $(SRC_FILES:.c=.o)
LIB_NAME = libft.a

# 기본 규칙
all: $(LIB_NAME)

# 라이브러리 생성 규칙
$(LIB_NAME): $(OBJ_FILES)
	@echo "Creating $@"
	ar rcs $@ $^

# 오브젝트 파일 생성 규칙
%.o: $(SRC_DIR)/%.c
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -c $< -o $@

# clean 규칙
clean:
	@echo "Cleaning up temporary files..."
	rm -f $(OBJ_FILES)

# fclean 규칙
fclean: clean
	@echo "Removing library files..."
	rm -f $(LIB_NAME)

# re 규칙
re: fclean all

.PHONY: all clean fclean re
